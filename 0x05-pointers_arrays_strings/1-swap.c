#include "holberton.h"

/**
	* swap_int - updates the value it points to to 98.
	* @a: a variable as referencia
	* @b: a variable as referencia
	* followed by a new line.
	* Return: none.
	*/

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
