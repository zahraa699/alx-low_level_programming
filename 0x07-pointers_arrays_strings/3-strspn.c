#include "main.h"

/**
 * _strspn - this fuction get length of perfix
 * @s: pointer value
 * @accept: substring of accepted char
 *
 * Return: returned value of length occurrance
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, z;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (z = 0; accept[z] != s[j]; z++)
		{
			if (accept[z] == '\0')
				return (j);
		}
	}
	return (j);
}
