#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: Double pointer to head
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
