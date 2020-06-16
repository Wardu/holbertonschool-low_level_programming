#include "holberton.h"
#include <math.h>

/**
 * print_last_digit - check the last digit.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int c)
{

if (c > 0)
{
c = c % 10;
_putchar('0' + c);
return (c);
}
else if (c < 0)
{
c = fabs(c);
c = c % 10;
_putchar('0' + c);
return (c);
}
else
{
_putchar('0');
return (c);
}
}
