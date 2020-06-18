#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_numbers(void)
{
int i = '0';

while (i <= '9')
{
_putchar(i);
i++;
}
_putchar('\n');
}
