#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point. Print Fizz, Buzz, and FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int div;

	for (div = 1; div <= 100; div++)
	{
		if ((div % 3 == 0) && (div % 5 == ))
		{
			printf("FizzBuzz");
		}
		else if (div % 3 == 0)
		{
			printf("Fizz");
		}
		else if (div % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", div);
		}
		if (div < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
