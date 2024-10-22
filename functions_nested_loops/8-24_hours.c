#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Print every minute of a day
 * Return: Void
 */
void jack_bauer(void)
{
	int h;
	int h2;
	int m;
	int m2;

	for (h = '0'; h < '3'; h++)
	{
		for (h2 = '0'; h2 < '4'; h2++)
		{
			for (m = '0'; m < '6'; m++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h);
					_putchar(h2);
					_putchar(':');
					_putchar(m);
					_putchar(m2);
					_putchar(10);
				}
			}
		}
	}
}
