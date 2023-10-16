#include "lists.h"

/**
 *add_node_end - A function that adds node at the end of a list
 *@head: Take a double pointer as a parameter
 *@str: Take a const str as a second parameter
 *Return: Struct node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Create an instance for your new node */
	list_t *newnode = (list_t *)malloc(sizeof(list_t));
	list_t *temp = NULL;

	/* Check if your new node is equal to null, if malloc fail */
	if (newnode == NULL)
	{
		return (NULL);
	}

	/* Assign data */
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	/*newnode->next = NULL;*/

	/* Check if the list is empty, if it is,*/
	/*the head should should point to the newnode*/

	if (*head == NULL)
	{
		*head = newnode;
	}

	/* If the list is not empty, you have to traverse it in the else block */
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
	return (newnode);
}
