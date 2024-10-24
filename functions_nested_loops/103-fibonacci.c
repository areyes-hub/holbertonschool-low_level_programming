#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	long int i, n = 33, n1 = 0, n2 = 1, next, sum = 0;

	for (i = 1; i <= n; i++)
	{
		next = n1 + n2;

		n1 = n2;
		n2 = next;
		if ((n2 % 2) == 0)
		{
			sum += n2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
