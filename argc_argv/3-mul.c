#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: length of arguments
 * @argv: arguments passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	result = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
