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
	int i = 0;

	while (i < 26)
	{
		i++;
		putchar(n);
		n++
	}
	putchar("\n");

	return (0);
}
