#include "main.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node's data (n)
 * @head: pointer to the head of the list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
