#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - prints single linked list h
 *
 * @head: linked list passed to function
 * Return: void (success)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
