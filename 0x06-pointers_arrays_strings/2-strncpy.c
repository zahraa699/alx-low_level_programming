#include "main.h"

/**
 * _strncpy - Short description, single line
 * @dest: Description of parameter x
 * @src: description
 * @n: description
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
