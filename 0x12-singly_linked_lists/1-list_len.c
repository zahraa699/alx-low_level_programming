#include "lists.h"

/**
 * list_len - this function determines length of linked list
 * @h: pointer of first node
 *
 * Description: this function get size of list
 *
 * Return:the returned value are size of list
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
