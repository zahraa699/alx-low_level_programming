#include "main.h"

/**
 * _memset - this function put memory with const.value
 * @s:pointer to put value
 * @b:constant
 * @n: maximmum bytes
 *
 * Return: result of pointer (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j > 0; j++, n--)
	{
		s[j] = b;
	}
	return (s);
}
