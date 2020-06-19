#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: number.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
if (!(size < 1))
{
int i;
i = size;
while (i > 0)
{
int j;
j = i;
while (j > 1)
{
_putchar(' ');
j--;
}
j--;
while (j <= size - i)
{
_putchar('#');
j++;
}
_putchar('\n');
i--;
}
}
else
_putchar('\n');
}
