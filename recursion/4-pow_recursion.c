#include "main.h"
/**
 * _pow_recursion - computes x raised to the power of y
 * @x: first parameter
 * @y: second parameter
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
