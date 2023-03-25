#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: input number to print symbol
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar(' ');
		_putchar(92); /* asci equal '/' */
		_putchar('\n');
	}

}
