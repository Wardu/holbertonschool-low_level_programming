#include "holberton.h"

/**
 * print_square  - prints a square, followed by a new line.
 * @size: number.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
{
	int i = 1, j;

	while (i <= size)
	{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
}
