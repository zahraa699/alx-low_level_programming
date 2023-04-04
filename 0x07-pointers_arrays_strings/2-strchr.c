#include "main.h"

/**
 * _strchr - this function print c
 * @s: pointer
 * @c: char parameter
 * Return: returned value is '\0'
 */

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (s + z);
	}
	return ('\0');
}
