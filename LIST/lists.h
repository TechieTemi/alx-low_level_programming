#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
// creating a template/struct inside my fie
typedef struct Node
{
	int data;
	struct Node *next;
}node;
//any time i am calling node, this is what the compiler will be seeing struct Node, because ive already created an alias of struct Node using typedef

void insertion_begin(node **head, int data);void insertion_end(node **head, int data);
void insertion_position(node **head, int     data, int position);
void print_node(node *head);


#endif
