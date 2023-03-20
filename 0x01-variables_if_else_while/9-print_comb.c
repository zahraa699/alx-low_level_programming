# include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program prints number with separeting (,) and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + 48);
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('$');
putchar('\n');
return (0);
}
