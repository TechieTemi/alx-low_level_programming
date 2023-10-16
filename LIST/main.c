#include "lists.h"

/**
 * main - Entry point of a code
 * Description: A function that implement list
 * Return: Always(success)
 */

int main(void)
{
	node *head = NULL;
	node *first = (node *)malloc(sizeof(node));
	first->data = 12;
	first->next = head;
	head = first;

	insertion_begin(&head, 78);
	insertion_end(&head, 89);
	insertion_position(&head, 56, 2);
	print_node(head);
	return(0);
}

