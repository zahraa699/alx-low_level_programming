#include "main.h"

/**
 * print_number - print numbers of char
 * @n : integer parameter
 * return : void
*/

void print_number(int n)
{
unsigned int c;

c = n;
if (n < 0)
{
_putchar('-');
c = -n;
}
if (c / 10 != 0)
{
print_number(c / 10);
_putchar((c % 10) + '0');
}
}
