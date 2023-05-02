#include "lists.h"

/**
 * get_nodeint_at_index - this function returns node at index
 * @head: first node
 * @index: index of node to get
 *
 * Description: this function return node at index
 *
 * Return: Description of the returned value pointer
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int m;

	for (node = head, m = 0; node && m < index; node = node->next, m++)
		;
	return (node);
}
