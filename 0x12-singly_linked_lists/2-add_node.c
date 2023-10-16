#include "lists.h"

/**
 *add_node - A function that adds a new node at the beginning
 *		of a list_t list.
 *@head: A double pointer which is the head
 *@str: A const char
 *Return: The struct node
 */

list_t *add_node(list_t **head, const char *str)
{
	/* create an instance for your node */
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	/* assign value to it */
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
