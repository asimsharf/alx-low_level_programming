#include "main.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
