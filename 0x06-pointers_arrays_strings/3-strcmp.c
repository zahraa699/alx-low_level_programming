#include "main.h"

/**
 * _strcmp - Short description, single line
 * @s1: first input
 * @s2: second: input
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

int _strcmp(char *s1, char *s2)
{
	int E = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			E = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (E);
}
