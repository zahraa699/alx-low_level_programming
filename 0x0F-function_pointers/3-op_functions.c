#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - this function add two numbers
 * @a : the first number
 * @b : second number
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value is sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function sub two numbers
 * @a : the first number
 * @b : second number
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value is sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - this function divied two numbers
 * @a : the first number
 * @b : second number
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value is divied result
 */

int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
 * op_mod - this function add two numbers
 * @a : the first number
 * @b : second number
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value of remainder
 */

int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
