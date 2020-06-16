#include "holberton.h"

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
}
else if (c == 0)
{
_putchar('0' + c);
}
else
{
c *= -1;
c = c % 10;
_putchar('0' + c);
}
return (c);
}
