#include "holberton.h"

/**
 * more_numbers - prints 10 times, from 0 to 14, followed by a new line.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int i, j, k, m;

	for (i = 0 ; i <= 9 ; i++)
	{
	m = '9';
		for (j = '0'; j <= '1' ; j++)
		{
			for (k = '0' ; k <= m ; k++)
			{
				if (j == '1')
				{
					_putchar(j);
				}
				_putchar(k);
				if (k == '9')
				{
					m = '4';
				}
			}
		}
	_putchar('\n');
	}
}
