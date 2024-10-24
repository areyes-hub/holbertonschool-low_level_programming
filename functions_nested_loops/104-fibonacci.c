#include <stdio.h>
/**
 * main - Entry point
 * Return: first fifty nums of the fibonacci sequence
 */
int main(void)
{
	long int i, n = 98, n1 = 0, n2 = 1, next;
	
	for (i = 1; i <= n; i++)
	{
		next = n1 + n2;
		
		printf("%ld", next);
		n1 = n2;
		n2 = next;
		if (i == 98)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
	return (0);
}
