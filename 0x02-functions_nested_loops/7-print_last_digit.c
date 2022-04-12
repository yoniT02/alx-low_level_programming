#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: takes in the integer
 *
 * Return: On success n % 10.
 */
int print_last_digit(int n)
{
	number = n % 10;
	if (number < 0)
	{
		number  = number * -1;
		_putchar(number);
		return (number);
	}
	else
	{
		_putchar(number);
		return (number);
	}
}
