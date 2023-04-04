#include "main.h"

/**
 * _strpbrk - this function get bytes
 * @s: pointer to char
 * @accept : pointer to vhar
 *
 * Return: returned value 0 success
 */

char *_strpbrk(char *s, char *accept)
{
	int j, z;
	char *p;

	j = 0;
	while (s[j] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[j])
			{
				p = &s[j];
				return (p);
			}
			z++;
		}
		j++;
	}
	return (0);
}
