%{
	#include <stdlib.h>
	#include <stdio.h>

	int yyerror(char *msg);

	#include "scope_sym.h"
	#include "lex.yy.c"
	#define SCOPE_LIST scope_list[cur_scope].symbol_table
	
	void error_expr(int,int,int);

	int cur_datatype, param_list[10], func_type;
	int p_idx = 0, p=0, right_side = 0;
	int is_decl = 0, is_loop = 0, is_func = 0,ret_status = 0;
    
	extern insert1** constant_table;
    insert2 scope_list[num_tables];

%}

%union
{
	int data_type;
	insert1* val1;
}

//tokens

%token STRING
%token LOGICAL_AND LOGICAL_OR LS_EQ GR_EQ EQ NOT_EQ
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token INCREMENT DECREMENT
%token SHORT INT LONG LONG_LONG SIGNED UNSIGNED CONST VOID CHAR FLOAT
%token IF FOR WHILE CONTINUE BREAK RETURN

%token <val1> IDENTIFIER
%token <val1> DEC_CONSTANT HEX_CONSTANT CHAR_CONSTANT FLOAT_CONSTANT

//Grammar

%type <val1> identifier
%type <val1> constant
%type <val1> array_index

%type <data_type> fundamental_expression
%type <data_type> unary_expression
%type <data_type> arithmetic_expression
%type <data_type> assignment_expression
%type <data_type> function_definition
%type <data_type> arr_def
%type <data_type> left_side

%left ','
%right '='
%left LOGICAL_OR
%left LOGICAL_AND
%left EQ NOT_EQ
%left '<' '>' LS_EQ GR_EQ
%left '+' '-'
%left '*' '/' '%'
%right '!'

%nonassoc UMINUS
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%

init1
	: init1 global
	| global
	;

global
	: function
	| declaration
	;

declaration
	: type  declaration_list ';' { is_decl = 0; }
	| declaration_list ';'
	| unary_expression ';'
	;

declaration_list
	: declaration_list ',' sub_decl
	| sub_decl
	;

sub_decl
	: assignment_expression
    | identifier
    |arr_def
	;


function
	: type
	identifier 				{   func_type = cur_datatype;
								is_decl = 0;
							    cur_scope = create_scope(); }

	'(' argument_list ')' 	{   is_decl = 0;
								fill_param_list($2,param_list,p_idx);
								p_idx = 0;
								is_func = 1;
								p=1; }

	compound_stmt			{	is_func = 0; }
    ;

type
	: data_type pointer  { is_decl = 1; }
    | data_type          { is_decl = 1; }
	;

data_type 
	: sign_specifier type_specifier
    | type_specifier
    ;

pointer
	: '*' pointer
    | '*'
    ;

sign_specifier 
	: SIGNED
	| UNSIGNED
    ;

type_specifier 
	: INT                               {cur_datatype = INT;}
    | SHORT INT                         {cur_datatype = SHORT;}
    | SHORT                             {cur_datatype = SHORT;}
    | LONG                              {cur_datatype = LONG;}
	| LONG INT                          {cur_datatype = LONG;}
    | LONG_LONG                         {cur_datatype = LONG_LONG;}
    | LONG_LONG INT                     {cur_datatype = LONG_LONG;}
	| CHAR 								{cur_datatype = CHAR;}
	| FLOAT 							{cur_datatype = FLOAT;}
	| VOID								{cur_datatype = VOID;}
    ;

argument_list
	: arguments
	|
    ;

arguments 
	: arguments ',' arg
    | arg
    ;

arg 
	: type identifier	{  param_list[p_idx++] = $2->data_type;  }
    ;

stmt
	: compound_stmt
    | single_stmt
    ;

compound_stmt
	:
	'{'    { if(!p)cur_scope = create_scope();
			 else p = 0; }

	statements { if(func_type != VOID && ret_status == 0) yyerror("No return statement for non-void function.");
					if(ret_status == 1) ret_status = 0;}
    
	'}'     { cur_scope = exit_scope(); }
    ;

statements
	: statements stmt
    |
    ;

single_stmt 
	: if_block
    | for_block
    | while_block
    | declaration
    | function_definition ';'
	| RETURN ';'	{ ret_status = 1;
						if(is_func)
					  {
						if(func_type != VOID)
						yyerror("return type (VOID) does not match function type");
					  }
					  else yyerror("return statement not inside function definition"); }

	| CONTINUE ';'	{ if(!is_loop) { yyerror("continue incorrectly used :( "); } }
	| BREAK ';'      { if(!is_loop) { yyerror("break incorrectly used :( "); } }
	| RETURN fundamental_expression ';'			 {      ret_status = 1;
														if(is_func)
													{
														if(func_type != $2)
														yyerror("return type does not match function type");
													}
													else yyerror("return statement not in function definition");
												 }
    ;

for_block
	: FOR '(' expression_stmt  expression_stmt ')' { is_loop = 1; } stmt { is_loop = 0; }
    | FOR '(' expression_stmt expression_stmt expression ')' { is_loop = 1; } stmt { is_loop = 0; }
    ;

if_block
	: IF '(' expression ')' stmt  %prec LOWER_THAN_ELSE
	| IF '(' expression ')' stmt ELSE stmt
    ;

while_block
	: WHILE '(' expression	')' { is_loop = 1; } stmt { is_loop = 0; }
	;





expression_stmt
	: expression ';'
    | ';'
    ;

expression
	: expression ',' fundamental_expression
	| fundamental_expression
	;

fundamental_expression
	: fundamental_expression '>' fundamental_expression					{ error_expr($1,$3,2); $$ = $1; }
    | fundamental_expression '<' fundamental_expression					{ error_expr($1,$3,2); $$ = $1; }
    | fundamental_expression EQ fundamental_expression					{ error_expr($1,$3,2); $$ = $1; }
    | fundamental_expression NOT_EQ fundamental_expression			    { error_expr($1,$3,2); $$ = $1; }
    | fundamental_expression LS_EQ fundamental_expression				{ error_expr($1,$3,2); $$ = $1; }
    | fundamental_expression GR_EQ fundamental_expression				{ error_expr($1,$3,2); $$ = $1; }
	| fundamental_expression LOGICAL_AND fundamental_expression			{ error_expr($1,$3,2); $$ = $1; }
	| fundamental_expression LOGICAL_OR fundamental_expression			{ error_expr($1,$3,2); $$ = $1; }
	| '!' fundamental_expression										{ $$ = $2; }
	| arithmetic_expression												{ $$ = $1; }
    | assignment_expression												{ $$ = $1; }
	| unary_expression													{ $$ = $1; }
    ;


assignment_expression
 	: left_side assign_op  arithmetic_expression								{ error_expr($1,$3,1); $$ = $3; right_side=0; }
    | left_side assign_op  arr_def										{ error_expr($1,$3,1); $$ = $3; right_side=0; }
    | left_side assign_op  function_definition								{ error_expr($1,$3,1); $$ = $3; right_side=0; } 
	| left_side assign_op  unary_expression                                   { error_expr($1,$3,1); $$ = $3; right_side=0; }
	| unary_expression assign_op  unary_expression						{ error_expr($1,$3,1); $$ = $3; right_side=0; }
    ;

unary_expression
	: identifier INCREMENT												{ $$ = $1->data_type; }
	| identifier DECREMENT												{ $$ = $1->data_type; }
	| DECREMENT identifier												{ $$ = $2->data_type; }
	| INCREMENT identifier												{ $$ = $2->data_type; }
	;

left_side
	: identifier														{ $$ = $1->data_type; }
    | arr_def														    { $$ = $1; }
	;

identifier
	: IDENTIFIER        { if(is_decl && !right_side) 
                          {
                            $1 = insert(SCOPE_LIST,yytext,INT_MAX,cur_datatype);
                        	if($1 == NULL) yyerror("Redeclaration of variable");
                          }
                          else {
                            $1 = bottom_up(yytext);
                            if($1 == NULL) yyerror("Variable not declared");
                            }
                            $$ = $1;
                        }
    ;

assign_op
	: '='               { right_side=1; }
    | ADD_ASSIGN 		{ right_side=1; } 
    | SUB_ASSIGN 		{ right_side=1; }
    | MUL_ASSIGN 		{ right_side=1; }
    | DIV_ASSIGN 		{ right_side=1; }
    | MOD_ASSIGN 		{ right_side=1; }
    ;

arithmetic_expression
	: arithmetic_expression '+' arithmetic_expression				{ error_expr($1,$3,0); }
    | arithmetic_expression '-' arithmetic_expression				{ error_expr($1,$3,0); }
    | arithmetic_expression '*' arithmetic_expression				{ error_expr($1,$3,0); }
    | arithmetic_expression '/' arithmetic_expression				{ error_expr($1,$3,0); }
	| arithmetic_expression '%' arithmetic_expression				{ error_expr($1,$3,0); }
	| '(' arithmetic_expression ')'									{ $$ = $2; }
    | '-' arithmetic_expression %prec UMINUS						{ $$ = $2; }
    | identifier																							{$$ = $1->data_type;}
    | constant																								{$$ = $1->data_type;}
    ;

constant
	: DEC_CONSTANT 			{$1->is_const=1; $$ = $1;}
    | HEX_CONSTANT			{$1->is_const=1; $$ = $1;}
	| CHAR_CONSTANT			{$1->is_const=1; $$ = $1;}
	| FLOAT_CONSTANT		{$1->is_const=1; $$ = $1;}
    ;

arr_def
	: identifier '[' array_index ']'		{	if(is_decl)
												{
												if($3->value <= 0)
												yyerror("size of array is not positive");
												else
                                                if($3->is_const && !right_side)
												$1->arr_dim = $3->value;
												else if(right_side) {
												{
													if($3->value > $1->arr_dim)
													yyerror("Array index out of bound");
													if($3->value < 0)
													yyerror("Array index cannot be negative");
												} }
												}
												else if($3->is_const) {
												if($3->value > $1->arr_dim)
												yyerror("Array index out of bound");
												if($3->value < 0)
												yyerror("Array index cannot be negative");
												}
												$$ = $1->data_type;
											}

array_index
	: constant			{ $$ = $1; }
	| identifier		{ $$ = $1; }
	| identifier '+' identifier {$$ = $1;}
	| identifier '-' identifier {$$ = $1;}
	| identifier '*' identifier {$$ = $1;}
	| identifier '/' identifier {$$ = $1;}
	;

function_definition
	: identifier '(' parameter_list ')'		{	$$ = $1->data_type;
												check_param_list($1,param_list,p_idx);
												p_idx = 0;	}
	| identifier '(' ')'					{	$$ = $1->data_type;
												check_param_list($1,param_list,p_idx);
												p_idx = 0;	}
    ;

parameter_list
	: parameter_list ','  parameter
    | parameter
	;

parameter
	: fundamental_expression				{ param_list[p_idx++] = $1; }
	| STRING							    { param_list[p_idx++] = STRING; }
	;

%%

void error_expr(int left, int right, int flag)
{
	if(left != right)
	{
		switch(flag)
		{
			case 0: yyerror("Type mismatch in arithmetic expression"); break;
			case 1: yyerror("Type mismatch in assignment expression"); break;
			case 2: yyerror("Type mismatch in logical expression"); break;
		}
	}
}

int main(int argc, char *argv[])
{
	 int i;
	 for(i=0; i<num_tables;i++)
	 {
	  scope_list[i].symbol_table = NULL;
	  scope_list[i].parent = -1;
	 }

	constant_table = create_table();
    scope_list[0].symbol_table = create_table();

	if(!yyparse())
	{
		printf("\nPARSING COMPLETE\n\n\n");
	}
	else
	{
			printf("\nPARSING FAILED!\n\n\n");
	}


	printf("SYMBOL TABLES\n\n");
	view_all();

	printf("CONSTANT TABLE");
	view_constant_table(constant_table);
	
	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
	exit(0);
}
