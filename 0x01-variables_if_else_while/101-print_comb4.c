# include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print three nested loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num1 = 0, num2 = 0, num3 = 0;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
for (num3 = 0; num3 <= 9; num3++)
{
if (num1 != num2 && num1 < num2 && num2 != num3 && num2 < num3)
{
putchar(num1 + 48);
putchar(num2 + 48);
putchar(num3 + 48);
if (num1 + num2 + num3 != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
