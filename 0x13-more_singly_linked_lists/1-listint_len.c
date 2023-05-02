#include "lists.h"

/**
 * listint_len - this function print linked list
 * @h: this is pointer of first node
 *
 * Description: this function print linked list
 *
 * Return:the returned value is size of lists
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
