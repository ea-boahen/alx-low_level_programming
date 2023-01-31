#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints single linked list h
 *
 * @h: linked list passed to function
 * Return: size_t (success)
 */
size_t print_listint(const listint_t *h)
{
	unsigned int snode = 0;
	const listint_t *tp;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		snode++;
		tp = tp->next;
	}

	return (snode);
}
