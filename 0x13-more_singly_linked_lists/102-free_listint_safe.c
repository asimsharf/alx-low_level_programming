#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head of the list
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *tmp = *h;

	if (h == NULL)
		exit(98);

	while (tmp != NULL)
	{
		*h = tmp->next;
		free(tmp);
		tmp = *h;
		i++;
		if (tmp <= *h)
		{
			free(tmp);
			break;
		}
	}
	*h = NULL;
	return (i);
}
