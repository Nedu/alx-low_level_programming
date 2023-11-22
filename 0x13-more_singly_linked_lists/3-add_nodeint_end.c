#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add node at the end
 * Function that adds a new node at the end of a listint_t list.
 * @head: pointer to the list
 * @n: int n
 *
 * Author - Nedu Robert
 * Return: Returns the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *list;

	list = malloc(sizeof(listint_t));
    temp = *head;
	if (!list)
	{
		return (NULL);
	}
	list->next = NULL;
	list->n = n;
    if (*head == NULL)
    {
        *head = list;
        return (list);
    }

    while (temp->next)
		temp = temp->next;

	temp->next = list;

	return (list);
}
