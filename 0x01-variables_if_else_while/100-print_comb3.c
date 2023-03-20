# include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers with nested loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num1 = 0, num2 = 0;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
if (num1 != num2 && num1 < num2)
{
putchar(num1 + 48);
putchar(num2 + 48);
if (num1 + num2 != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
