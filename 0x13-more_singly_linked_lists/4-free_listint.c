#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: Head to pointer
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
