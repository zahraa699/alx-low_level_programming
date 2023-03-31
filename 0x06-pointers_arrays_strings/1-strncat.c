#include "main.h"

/**
 * _strncat - Short description, single line
 * @dest: Description of parameter x
 * @src : description
 * @n : description
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
