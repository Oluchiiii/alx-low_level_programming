#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer 10 bytes at a time,
 * starting with the byte position, then showing the
 * hex content, then displaying printable characters.
 *
 * @b: the buffer to be printed
 * @size: number of bytes to be printed from the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + 1) > 126)
					printf("%c", *(b + 1));
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}