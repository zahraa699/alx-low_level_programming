#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print num from 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
