#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
