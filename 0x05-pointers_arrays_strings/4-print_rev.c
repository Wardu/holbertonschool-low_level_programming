#include "holberton.h"

/**
	* print_rev - updates the value it points to to 98.
	* @s: a variable as referencia
	* followed by a new line.
	* Return: none.
	*/

void print_rev(char *s)
{
	int i, j;
for (; s[i] != '\0' ; i++)
	{
	}
	for (j = i - 1; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
_putchar('\n');
}
