#include "lists.h"

/**
 * print_list - A function that print all the element in a list
 * @h: Of type list_h
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	/* what if the list is not empty */

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
