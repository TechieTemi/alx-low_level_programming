#include "lists.h"

/**
 *list_len - A function that returns the number of elements,
 *		 in a linked list_t list.
 *@h: Of type list_t
 *Return: The number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
