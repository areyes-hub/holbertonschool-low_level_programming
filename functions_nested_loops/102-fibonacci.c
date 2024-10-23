#include <stdio.h>
/**
 * main - Entry point
 * Return: first fifty nums of the fibonacci sequence
 */
int main(void)
{
	long int i, n = 50, n1 = 0, n2 = 1, next;

	printf("%d", n2);
	for (i = 1; i < n; i++)
	{
		next = n1 + n2;

		printf(", ");
		printf("%d", next);
		n1 = n2;
		n2 = next;
	}
	printf("\n");
	return (0);
}
