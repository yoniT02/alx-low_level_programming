#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;
	int next;

	if (n < 1)
		return;
	printf("%d ", f1);
	for (i = 1; i < n; i++)
	{
		printf("%d ", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

int main()
{
    printFibonacciNumbers(98);
    return 0;
}
