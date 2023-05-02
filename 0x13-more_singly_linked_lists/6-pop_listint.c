#include "lists.h"

/**
 * pop_listint - this function pops head node of list
 * @head: address of pointer to first node
 *
 * Description: this function pops head node of list
 *
 * Return: Description of the returned value of popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
