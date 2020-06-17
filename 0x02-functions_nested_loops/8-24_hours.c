#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day, starting from 00:00 to 23:59.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
int h1, h2, m1, m2;

for (h1 = 0 ; 0 < 3 ; h1++)
{
for (h2 = 0 ; 0 <= 9 ; h2++)
{
for (m1 = 0 ; 0 < 6 ; m1++)
{
for (m2 = 0 ; 0 <= 9 ; m2++)
{
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
}
}
}
}
}


