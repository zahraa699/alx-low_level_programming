#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes node at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Description: this function deletes node at given index
 *
 * Return: 1 if success or return -1 if failure
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int j = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (j == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		j++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
