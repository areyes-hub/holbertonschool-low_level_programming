#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	long long int i, n = 33, n1 = 0, n2 = 1, next, sum;

	for (i = 1; i <= n; i++)
	{
		next = n1 + n2;
		sum = 0;

		n1 = n2;
		n2 = next;
		if ((next % 2) == 0)
		{
			sum += next;
		}
		printf("%lld", sum);
	}
	printf("\n");
	return (0);
}
