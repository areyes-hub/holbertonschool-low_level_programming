#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds a and b
 * @a: first number
 * @b: second number
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract a number from another
 * @a: first number
 * @b: second number
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: The division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: first number
 * @b: second number
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
