#include "main.h"

/**
 * positive_or_negative - tests function that prints if int is + or -
 * @n: Description of parameter n
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
}

/**
 * main - Entry point
 *
 * Description:tests function that prints if integer is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

i = 98 % 2;
positive_or_negative(i);
return (0);
}
