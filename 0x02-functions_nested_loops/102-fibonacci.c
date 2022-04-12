#include <stdio.h>

/**
 * main - prints the first 50 Fibnonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * The numbers are separated by comma,
 * followed by a space.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] =2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 49)
			printf("%ld\n", fibonacci[i]);
		else
			printf("%ld, ", fibonacci[i]);
	}

	return (0);
}
