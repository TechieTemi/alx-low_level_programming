#include "lists.h"

/**
 * print_list - Prints all elements in a list
 * @h: A pointer to the list
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)

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
