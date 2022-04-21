#include "main.h"

/**
 * print_number - prints integers
 *
 * @n: accpets integer
 * Return - void
 */
void print_number(int n)
{
	if (n > 999)
	{
		_putchar(n / 1000 + '0');
		n % = 1000;
		_putchar(n / 100 + '0');
		n % = 100;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99)
	{
		_putchar(n / 100 + '0');
		n % = 100;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 9)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		n * = -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	_putchar('0');
}

