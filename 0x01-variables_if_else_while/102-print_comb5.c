# include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program print nested loop with {..}
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num1 = 0, num2 = 0;
for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = 0; num2 <= 99; num2++)
{
if (num2 != num1)
{
putchar((num1 / 10) + 48);
putchar((num1 % 10) + 48);
putchar(' ');
putchar((num2 / 10) + 48);
putchar((num2 % 10) + 48);
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
