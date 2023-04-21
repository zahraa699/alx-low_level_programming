#include "variadic_functions.h"

/**
 * print_numbers - this function prints number with separator
 * @separator: the string separator
 * @n: the number of integers
 * @... : the integers number
 *
 * Description: Longer description of the function
 *
 * Return: the returned value is void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
		printf("%d%s", va_arg(ap, int),
				j ? (separator ? separator : "") : "\n");
	va_end(ap);
}
