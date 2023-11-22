#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print list
 * Function that prints all the elements of a listint_t list.
 * @h: pointer to the list
 *
 * Author - Nedu Robert
 * Return: Returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}

	return (length);
}
