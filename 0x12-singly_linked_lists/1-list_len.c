#include "lists.h"

/**
 * list_len - Checks the length for Holberton School students
 * @h: name of the list
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
