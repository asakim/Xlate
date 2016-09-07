/*
 ============================================================================
 Name        : reverseStack.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

typedef struct
{
	int vid;
} TCAM_BLOCK_t;

void is_empty()
{

}

void push()
{

}

void pop()
{

}

void top()
{

}

int main(void)
{
	struct stack *s = NULL;
	TCAM_BLOCK_t test;

	test.vid = 10;

	//check for empty
	is_empty(s);


	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
