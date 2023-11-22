#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - List length
 * Function that returns the number of elements in a linked listint_t list.
 * @h: pointer to the list
 *
 * Author - Nedu Robert
 * Return: Returns the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t numElements = 0;

	while (h)
	{
		h = h->next;
		numElements++;
	}

	return (numElements);
}
