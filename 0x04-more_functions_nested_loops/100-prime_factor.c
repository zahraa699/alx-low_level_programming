#include <stdio.h>

/**
 * _sqrt - Short description, single line
 * @x : input number
 *
 * Return: Description of the returned value
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - find and prints largest prime num
 *
 * @n: input number to find
 */

void largest_prime_factor(long int n)
{
	int pNum, largest;

	while (n % 2 == 0)
		n == n / 2;
	for (pNum = 3; pNum <= _sqrt(n); pNum += 2)
	{
		while (n % pNum == 0)
		{
			n = n / pNum;
			largest = pNum;
		}
	}
	if (n > 2)
		largest = n;
	printf("%d", largest);
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
