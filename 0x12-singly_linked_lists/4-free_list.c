#include "lists.h"

/**
 *free_list - A function that frees a list_t list.
 *@head: Take a double pointer as a parameter
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;
	/* Traverse the list in order to free the list */
	while (head != NULL)
	{
		/* Declare a variable that you will assign head to */
		temp = head;
		/* traverse your list with the head while you free your list with the temp */
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
