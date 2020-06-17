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
int lst;

lst = c % 10;

if (lst < 0)
{
lst = -lst;
_putchar('0' + lst);
}
else
{
_putchar('0' + lst);
}
return (lst);
}
