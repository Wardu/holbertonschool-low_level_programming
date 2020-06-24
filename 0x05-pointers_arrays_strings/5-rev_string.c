#include "holberton.h"

/**
	* rev_string - updates the value it points to to 98.
	* @s: a variable as referencia
	* followed by a new line.
	* Return: none.
	*/

void rev_string(char *s)
{
	int i, j, k;

for (; s[i] != '\0' ; i++)
	{
	}
i = i - 1;
for (j = 0 ; j <= i / 2; j++)
	{
	k = s[j];
	s[j] = s[i - j];
	s[i - j] = k;
}
}
