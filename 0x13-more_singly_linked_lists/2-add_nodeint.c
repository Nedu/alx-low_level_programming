#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - List length
 * Function that returns the number of elements in a linked listint_t list.
 * @head: pointer to the list
 * @n: pointer to the list
 *
 * Author - Nedu Robert
 * Return: Returns the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->next = *head;
	temp->n = n;
	*head = temp;

	return (temp);
}
