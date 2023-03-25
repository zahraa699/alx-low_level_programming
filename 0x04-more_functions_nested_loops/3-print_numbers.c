#include "main.h"

/**
 * print_numbers - print number using putchar
 *
 * Return: Always (0) success
 */

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
