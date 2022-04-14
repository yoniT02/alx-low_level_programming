#include "main.h"

/**
 * print_diagonal - prints the '\' character n times
 * @n: the integer that determines the execution of the for loop
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
