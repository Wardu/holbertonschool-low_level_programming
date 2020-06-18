#include "holberton.h"

/**
 * print_line - prints  draws a straight line in the terminal.
 * @n: number.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
