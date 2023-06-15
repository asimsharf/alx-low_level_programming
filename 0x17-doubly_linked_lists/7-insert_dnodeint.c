#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @n: value of new node to add
 * @idx: index of new node
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	current = get_dnodeint_at_index(*h, idx);

	if (current == NULL)
	{
		return (NULL);
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
