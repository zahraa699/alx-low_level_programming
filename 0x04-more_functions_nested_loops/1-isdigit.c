#include "main.h"

/**
 * _isdigit - checks if input is digit from 0 to 9
 *
 * @c: input number
 *
 * Return: 1 if number or 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
