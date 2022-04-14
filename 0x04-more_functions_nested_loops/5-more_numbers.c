#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		if (j > 9)
		{
			_putchar(j / 10 + '0');
		}
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
}
