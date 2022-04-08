#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char n = 'a';

	for (int i = 0; i < 26; i++, n++)
		putchar(n);
	putchar('\n');

	return (0);
}
