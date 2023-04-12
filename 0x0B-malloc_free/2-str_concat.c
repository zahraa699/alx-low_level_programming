#include "main.h"

/**
 * _strlen - find length of string
 * @s: string parameter
 *
 * Description: Longer description of the function)?
 *
 * Return: returned integer value
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		s++;
		size++;
	}
	return (size);
}

/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int A1, A2;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		A1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		A2 = _strlen(s2);

	conc = malloc(A1 + A2 + 1)
	if (!conc)
		return (0);

	tmp = conc;

	while (*s1)
		*tmp++ = *s1++;
	while ((*tmp++ = *s2++))
		;
	return (conc);
}
