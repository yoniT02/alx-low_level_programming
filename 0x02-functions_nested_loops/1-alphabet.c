#include "main.h"

void print_alphabet(void)
 {
	char n = 'a';
	int i;

	for (i = 0; i < 26; i++, n++)
		_putchar(n);
	_putchar('\n');
 }
