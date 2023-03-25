#include "main.h"

/**
 * main - print numbers 1 - 100 followed by line
 * number that mult by 3 print fizz
 * number that mult by 5 print buzz
 * number taht are mult by 3 and 5 fizzBuzz
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
