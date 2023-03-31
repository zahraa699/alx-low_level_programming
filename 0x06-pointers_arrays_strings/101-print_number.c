#include "main.h"

/**
 * print_number - this function print numbers of char
 * @n: interger parameter
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
