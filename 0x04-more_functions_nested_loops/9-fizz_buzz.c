#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i <= 100)
			{
				printf(" ");
				i++;
					if (i % 5 == 0)
					{
						printf("Buzz");
						printf(" ");
						i++;
					}
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i <= 100)
			{
				printf(" ");
				i++;
					if (i % 3 == 0)
					{
						printf("Fizz");
						printf(" ");
						i++;
					}
			}
		}
		if (i <= 100)
		{
			printf("%d", i);
			printf(" ");
		}
	}
	return (0);
}
