#include "main.h"

/**
 * _isupper - check if letter is upper
 *
 * @c: input for letter
 *
 * Return: 1 if it upper letter , 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
