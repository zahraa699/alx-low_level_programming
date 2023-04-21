#include "variadic_functions.h"

/**
 * print_strings - prints string with separator
 * @separator:the string of separator
 * @n: the number of arguments
 * @...: the string to prints
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value are void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int j = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				j ? (separator ? separator : "") : "\n");
	va_end(ap);
}
