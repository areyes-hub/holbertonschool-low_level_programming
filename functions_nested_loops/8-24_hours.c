#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Print every minute of a day
 * Return: Void
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("%02d:%02d\n", h, m);
		}
	}
}
