#include "lists.h"

/**
 * print_listint - this function print linked list
 * @h: this is pointer of first node
 *
 * Description: this function print linked list
 *
 * Return:the returned value is size of lists
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
