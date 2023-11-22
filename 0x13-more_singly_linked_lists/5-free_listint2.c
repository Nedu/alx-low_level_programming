#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free
 * Function that frees a listint_t list.
 * @head: pointer to the list
 *
 * Author - Nedu Robert
 * Return: Returns void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	head = NULL;
}
