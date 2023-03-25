#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 *
 * return : always 0 (success)
 */

void print_triangle(int size)
{
	int h, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((h + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
