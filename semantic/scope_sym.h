#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#define hash_size 100
#define num_tables 10

typedef struct single_insert
{
int arr_dim;
int is_const;
int num_param;    
char* token;
double value;
int data_type;
int* param_list; 
struct single_insert* next;
}insert1;

typedef struct table
{
	insert1** symbol_table;
	int parent;
}insert2;

int index1 = 0, cur_scope = 0;
extern insert2 scope_list[num_tables];

int hash(char *s)
{
	int mod = hash_size;
	int l = strlen(s), val = 0, i;
	for (i=0;i<l;i++)
	{
		val = val * 10 + (s[i] - 'A');
		val = val%mod;
		while(val<0)
			val += mod;
	}
	return val;
}

insert1* lookup(insert1** hash_ptr, char* token)
{
	int idx = 0;
	insert1* temp;
	idx = hash( token );
	temp = hash_ptr[idx];

	while( temp != NULL && strcmp( token, temp->token ) != 0 )
	{
		temp = temp->next;
	}

	if(temp == NULL)
	return NULL;
    else
	return temp;

}

void view_all()
{
		int i;
		for(i=0; i<=index1; i++)
		{
			printf("SCOPE: %d\n",i);
			view_table(scope_list[i].symbol_table);
			printf("\n\n");
		}
}


void view_table(insert1** hash_ptr)
{
	int i;
	insert1* pointer1;

	printf("\n");
	for(i=0; i< 85; i++)
	printf("*");
	printf("\n");

    printf(" |%-15s| %-15s| %-15s| %-15s| %-15s|\n","TOKEN","DATA TYPE","ARRAY DIMENSION","NO OF PARAMS","LIST OF PARAMS");

	printf("\n");
	for(i=0; i< 85; i++)
	printf("*");
	printf("\n");

	for( i=0; i < hash_size; i++)
	{
		pointer1 = hash_ptr[i];
		while( pointer1 != NULL)
		{
			printf(" |%-15s| %-15d| %-15d| ", pointer1->token, pointer1->data_type, pointer1->arr_dim);

			printf(" %-15d|", pointer1->num_param);

			int j;
			for(j=0; j < pointer1->num_param; j++)
			printf(" %d|",pointer1->param_list[j]);
			printf("\n");

			pointer1 = pointer1->next;
		}
	}

	printf("\n");
	for(i=0; i< 85; i++)
	printf("*");
	printf("\n");

}


void view_constant_table(insert1** hash_ptr)
{
	int i;
	insert1* pointer1;

    printf("\n");
	for(i=0; i< 85; i++)
	printf("*");
	printf("\n");
	printf(" %-10s %-10s \n","TOKEN","DATA TYPE");

	printf("\n");
	for(i=0; i< 85; i++)
	printf("*");
	printf("\n");

	for( i=0; i < hash_size; i++)
	{
		pointer1 = hash_ptr[i];
		while( pointer1 != NULL)
		{
			printf(" %-10s %-10d \n", pointer1->token, pointer1->data_type);
			pointer1 = pointer1->next;
		}
	}

	printf("\n");
	for(i=0; i< 85; i++)
	printf("*");
	printf("\n");
}


insert1** create_table()
{
	int i;
    insert1** hash_ptr = NULL;
	if( ( hash_ptr = malloc( sizeof( insert1* ) * hash_size ) ) == NULL )
    	return NULL;

    for( i = 0; i < hash_size; i++ )
	{
		hash_ptr[i] = NULL;
	}
    return hash_ptr;
}

int create_scope()
{
	index1++;
    scope_list[index1].symbol_table = create_table();
	scope_list[index1].parent = cur_scope;

	return index1;
}

int exit_scope()
{
	return scope_list[cur_scope].parent;
}

insert1 *create_entry( char *token, int value, int data_type )
{
	insert1 *new_val;

	if( ( new_val = malloc( sizeof( insert1 ) ) ) == NULL ) {
		return NULL;
	}

	if( ( new_val->token = strdup( token ) ) == NULL ) {
		return NULL;
	}

	new_val->value = value;
	new_val->next = NULL;
	new_val->param_list = NULL;
	new_val->arr_dim = -1;
	new_val->is_const = 0;
	new_val->num_param = 0;
	new_val->data_type = data_type;

	return new_val;
}

insert1* insert( insert1** hash_ptr, char* token, int value, int data_type)
{
	
	insert1* find = lookup( hash_ptr, token );
	if( find != NULL)
	{
		if(find->is_const)
			return find;
		return NULL;
	}

	int idx;
	insert1* new_val = NULL;
	insert1* head = NULL;

	idx = hash( token );
	new_val = create_entry( token, value, data_type );

	if(new_val == NULL)
	{
		printf("new entry cannot not be created, insertion has failed");
		exit(1);
	}

	head = hash_ptr[idx];

	if(head == NULL) {
		hash_ptr[idx] = new_val;
	}
	else {
		new_val->next = hash_ptr[idx];
		hash_ptr[idx] = new_val;
	}
	return hash_ptr[idx];
}

insert1* bottom_up(char* token)
{
	int idx = cur_scope;
	insert1* find = NULL;

	while(idx != -1)
	{
		find = lookup(scope_list[idx].symbol_table, token);

		if(find != NULL)
			return find;

		idx = scope_list[idx].parent;
	}

	return find;
}

int check_param_list(insert1* entry, int* list, int m)
{
	int* param_list = entry->param_list;

	if(m != entry->num_param)
	{
		yyerror("Number of parameters and arguments do not match");
	}

	int i;
	for(i=0; i<m; i++)
	{
		if(list[i] != param_list[i])
		yyerror("Parameter and argument types do not match");
	}

	return 1;
}

void fill_param_list(insert1* entry, int* list, int n)
{
	entry->param_list = (int *)malloc(n*sizeof(int));

	int i;
	for(i=0; i<n; i++)
	{
		entry->param_list[i] = list[i];
	}
	entry->num_param = n;
}


