#include "lists.h"

/**
 * free_list - this function get frees all nodes of a list
 * @head: pointer to head node
 *
 * Description:this function get frees all nodes of a list
 *
 * Return: Description of the returned value void
 */

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
