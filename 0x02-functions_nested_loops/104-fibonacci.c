#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
void printFibonacciNumbers(int n)
{
    int f1 = 1, f2 = 2, i;
    int next;

    if (n < 1)
        return;
    printf("%d ", f1);
    printf(", ");
    for (i = 1; i < n; i++) {
        printf("%d ", f2);
	if (i < 97)
		{
			printf(", ");
		}
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
int main(void)
{
	printFibonacciNumbers(98);
	return (0);
}
