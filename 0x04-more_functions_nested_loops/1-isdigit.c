#include "holberton.h"

/**
 * _isdigit - checks for digit character
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
	return (1);
}
else
{
	return (0);
}
}
