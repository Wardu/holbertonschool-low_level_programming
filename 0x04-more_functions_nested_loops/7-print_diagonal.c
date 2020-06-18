#include "holberton.h"

/**
 * print_diagonal - prints draws a  diagonal line on the terminal.
 * @n: number.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i = 1, j;

	while (i <= n)
	{
		for (j = 1 ; j <= i - 1 ; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
