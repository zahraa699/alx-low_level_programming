#include "lists.h"

/**
 * reverse_listint - reverses an int list
 * @head: address ofpointer to first node
 *
 * Description: this function reverses int list
 *
 * Return: Description of the returned value addtres of head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
