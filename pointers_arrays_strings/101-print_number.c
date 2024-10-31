#include "main.h"
/**
 * print_number - Prints an integer
 * @n: Parameter to evaluate
 * Return: void
 */
void print_number(int n)
{
	int u, d, c, m, num, unum, dnum, cnum, mnum;

	u = n % 10;
	d = ((n % 100) - u) / 10;
	c = ((n % 1000) - (n % 100)) / 100;
	m = ((n % 10000) - (n % 1000)) / 1000;

	num = n * -1;
	unum = num % 10;
	dnum = ((num % 100) - unum) / 10;
	cnum = ((num % 1000) - (num % 100)) / 100;
	mnum = ((num % 10000) - (num % 1000)) / 1000;

	if (n < 0)
	{
		if (num > 999)
		{
			_putchar('-');
			_putchar(mnum + '0');
			_putchar(cnum + '0');
			_putchar(dnum + '0');
			_putchar(unum + '0');
		}
		else if (num > 99)
		{
			_putchar('-');
			_putchar(cnum + '0');
			_putchar(dnum + '0');
			_putchar(unum + '0');
		}
		else if (num > 9)
		{
			_putchar('-');
			_putchar(dnum + '0');
			_putchar(unum + '0');
		}
		else
		{
			_putchar('-');
			_putchar(num + '0');
		}
	}
	else if (n > 999)
	{
		_putchar(m + '0');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else if (n > 99)
	{
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else if (n > 9)
	{
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
