#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char n;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		putchar('\n');
	}
}



