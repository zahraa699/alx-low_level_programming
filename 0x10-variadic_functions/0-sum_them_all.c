#include "variadic_functions.h"

/**
 * sum_them_all - this function sum integers variables
 * @n: the number of integers varibles
 * @...: the integers to sum
 *
 * Description: Longer description of the function)?
 *
 * Return:the returned value sum of integers
 */


int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
