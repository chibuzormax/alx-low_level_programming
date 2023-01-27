#include "lists.h"

/**
 * print_list - Checks the code for Holberton School Students
 * @h: Name of the list
 * Return: The number of Nodes
 */

size_t print_name(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h ->next;
	}
	return (count);
}
