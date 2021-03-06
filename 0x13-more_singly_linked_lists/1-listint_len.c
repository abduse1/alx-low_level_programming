#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements of a linked list
 * @h: the head of a linked list
 *
 * Return:The number of elements of a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}

