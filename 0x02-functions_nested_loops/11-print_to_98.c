#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Adds two integers and returns the result.
 * @n: interger
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{
int i;
if (n >= 98)
{
for (i = n ; i <= 98 ; i++)
{
printf("%i, ", i);
}
}
else
{
for (i = n ; i >= 98 ; i--)
{
printf("%i, ", i);
}
}
printf("\n");
}
