#include "lists.h"

/**
 * free_listint2 - this function frees list of ints
 * @head: address ofpointer to first node
 *
 * Description: this function frees a lists of ints
 *
 * Return: Description of the returned value
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
