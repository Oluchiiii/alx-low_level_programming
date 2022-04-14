#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: tested character
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
