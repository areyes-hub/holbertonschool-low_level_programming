#include "main.h"
/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: first parameter
 * Return: The natural square root. Else, -1.
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
/**
 * sqroot - solves the recursion
 * @num: first parameter
 * @root: second parameter
 * Return: square root if natural
 */
int sqroot(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if ((root * root) < num)
	{
		return (sqroot(num, root + 1));
	}
	else
	{
		return (-1);
	}
}
