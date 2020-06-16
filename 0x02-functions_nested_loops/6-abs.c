#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int c)
{
if (c > 0)
{
return (c);
}
else if (c == 0)
{
return (c);
}
else
{
c *= -1;
return (c);
}
}
