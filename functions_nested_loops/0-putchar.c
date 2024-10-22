#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(put[i]);
	}
	putchar(10);
	return (0);
}
