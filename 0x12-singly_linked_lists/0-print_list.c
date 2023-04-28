#include "lists.h"

/**
 * _strlen  - this fuction find length of string
 * @s: the string whose length
 *
 * Description: this function find length of string
 *
 * Return:the returned value is the length of string
 */

int  _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}

/**
 * print_list  - this fuction print linked list
 * @h: pointer of first node
 *
 * Description: this function find size of list
 *
 * Return:the returned value is size of list
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
