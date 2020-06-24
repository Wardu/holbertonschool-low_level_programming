#include "holberton.h"

/**
	* _puts - updates the value it points to to 98.
	* @str: a variable as referencia
	* followed by a new line.
	* Return: none.
	*/

void _puts(char *str)
{
	int i;

	for (; str[i] != 0 ; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
