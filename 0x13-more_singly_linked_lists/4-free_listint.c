#include "lists.h"

/**
 * free_listint - this function frees a list of int
 * @head: pointer to first node
 *
 * Description : this function frees alist of ints
 *
 * Return: Description of the returned value
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
