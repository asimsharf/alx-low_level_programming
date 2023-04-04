#include "main.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head of the list
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		i++;
	}
	return (i);
}
