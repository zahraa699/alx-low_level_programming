#include "main.h"

/**
 * print_square - draw square by #
 *
 * @size : input size of square
 *
 * return : always 0 (success)
 */

void print_square(int size)
{
	int h, w;

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= size; w++)
			_putchar('#');
		_putchar('\n');
	}
}
