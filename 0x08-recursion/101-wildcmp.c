#include "main.h"

/**
 * move_star - this function prints all star character
 * @s2: secound string
 *
 * Description: Longer description of the function)?
 * Return: returned value of pointer of stars
 */

int *move_star(char *s2)
{
	if (*s2 == '*')
		return (move_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception_star -this function make magic reality
 * @s1: first string
 * @s2: second string
 *
 * Description: Longer description of the function)?
 * Return: return 1 if identical or 0 if false
 */

int inception_star(char *s1, char *s2)
{
	int R = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		R += wildcmp(s1 + 1, s2 + 1);
	R += inception_star(s1 + 1, s2);
	return (R);
}

/**
 * wildcmp -this function make magic reality
 * @s1: first string
 * @s2: second string
 *
 * Description: Longer description of the function)?
 * Return: return 1 if identical or 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	int R = 0;

	if (!*s1 && *s2 == '*' && !*move_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			R += wildcmp(s1 + 1, s2 + 1);
		R += inception_star(s1, s2);
		return (!!R);
	}
	return (0);

}
