#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day, starting from 00:00 to 23:59.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
int h, m;

for (h = 0 ; h < 24 ; h++)
for (m = 0 ; m < 60 ; m++)
{

_putchar(h / 10 + '0');
_putchar(h % 10 + 48);
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
}
}
