#include "main.h"

/**
 * _abs - cmputes the absolute value of an integer
 *
 * @i: an input character
 *
 * Return: absolute value of i
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
