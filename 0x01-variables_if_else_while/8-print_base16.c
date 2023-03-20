#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program print hexiadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 48;
for (num = 48; num <= 102; num++)
{
putchar(num);
if (num == 57)
{
num += 39;
}
}
putchar('\n');
return (0);
}
