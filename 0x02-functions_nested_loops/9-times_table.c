#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
int column, row, sum, t;

column = 0;
while (column < 10)
{
_putchar('0');
row = 1;
while (row < 10)
{
_putchar(',');
_putchar(' ');
sum = column *row, t = sum / 10;
if (sum < 10)
{
_putchar(' ');
_putchar(sum + '0');
}
else
{
_putchar(t + '0');
_putchar(sum % 10 + '0');
}
row++;
}
_putchar('\n');
column++;
}
}
