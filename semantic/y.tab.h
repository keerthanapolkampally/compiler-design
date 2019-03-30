
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     LOGICAL_AND = 259,
     LOGICAL_OR = 260,
     LS_EQ = 261,
     GR_EQ = 262,
     EQ = 263,
     NOT_EQ = 264,
     MUL_ASSIGN = 265,
     DIV_ASSIGN = 266,
     MOD_ASSIGN = 267,
     ADD_ASSIGN = 268,
     SUB_ASSIGN = 269,
     INCREMENT = 270,
     DECREMENT = 271,
     SHORT = 272,
     INT = 273,
     LONG = 274,
     LONG_LONG = 275,
     SIGNED = 276,
     UNSIGNED = 277,
     CONST = 278,
     VOID = 279,
     CHAR = 280,
     FLOAT = 281,
     IF = 282,
     FOR = 283,
     WHILE = 284,
     CONTINUE = 285,
     BREAK = 286,
     RETURN = 287,
     IDENTIFIER = 288,
     DEC_CONSTANT = 289,
     HEX_CONSTANT = 290,
     CHAR_CONSTANT = 291,
     FLOAT_CONSTANT = 292,
     UMINUS = 293,
     LOWER_THAN_ELSE = 294,
     ELSE = 295
   };
#endif
/* Tokens.  */
#define STRING 258
#define LOGICAL_AND 259
#define LOGICAL_OR 260
#define LS_EQ 261
#define GR_EQ 262
#define EQ 263
#define NOT_EQ 264
#define MUL_ASSIGN 265
#define DIV_ASSIGN 266
#define MOD_ASSIGN 267
#define ADD_ASSIGN 268
#define SUB_ASSIGN 269
#define INCREMENT 270
#define DECREMENT 271
#define SHORT 272
#define INT 273
#define LONG 274
#define LONG_LONG 275
#define SIGNED 276
#define UNSIGNED 277
#define CONST 278
#define VOID 279
#define CHAR 280
#define FLOAT 281
#define IF 282
#define FOR 283
#define WHILE 284
#define CONTINUE 285
#define BREAK 286
#define RETURN 287
#define IDENTIFIER 288
#define DEC_CONSTANT 289
#define HEX_CONSTANT 290
#define CHAR_CONSTANT 291
#define FLOAT_CONSTANT 292
#define UMINUS 293
#define LOWER_THAN_ELSE 294
#define ELSE 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 23 "par.y"

	int data_type;
	insert1* val1;



/* Line 1676 of yacc.c  */
#line 139 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


