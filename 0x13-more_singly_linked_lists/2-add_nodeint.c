#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t
 * @head: Head of double pointer
 * @n: int add to the list
 * Return: Address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
