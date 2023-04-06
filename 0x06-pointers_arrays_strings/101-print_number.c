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
putchar('-');
c = -n;
}
if (c / 10 != 0)
{
print_number(c / 10);
putchar((c % 10) + '0');
}
}
