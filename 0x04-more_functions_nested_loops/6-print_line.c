#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: is input number
 */

void print_line(int n)
{
	int symbol;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (symbol = 1; symbol <= n; symbol++)
			_putchar('_');
		_putchar('\n');
	}
}
