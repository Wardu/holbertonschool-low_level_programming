#include "holberton.h"

/**
 * print_sign - check the sign of a number.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int c)
{
if (c > 0)
{
return (1);
}
else if (c == 0)
{
return (0);
}
else
{
return (-1);
}
}
