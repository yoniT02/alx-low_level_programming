#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: takes in the integer
 *
 * Return: On success n % 10.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(-1 * (n % 10));
		return (-1 * (n % 10));
	}
	else
	{
		_putchar(n % 10);
		return (n % 10);
	}
}
