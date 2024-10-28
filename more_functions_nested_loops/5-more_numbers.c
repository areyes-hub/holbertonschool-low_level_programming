#include "main.h"
/**
 * more_numbers - Prints numbers from 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int row = 0;
	int number = 0;

	while (row < 10)
	{
		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
			number++;
		}
		_putchar(10);
		row++;
		number = 0;
	}
}
