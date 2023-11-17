#include "lists.h"

/**
 * print_list - Print list
 * Function that prints all the elements of a list_t list.
 * @h: pointer to the list
 * Author - Nedu Robert
 *
 * Return: Returns the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		length++;
	}

	return (length);
}
