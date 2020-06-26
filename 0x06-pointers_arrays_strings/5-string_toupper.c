#include "holberton.h"

/**
 * string_toupper - copies a string
 * @s: source to copy string to
 *
 * Return: copied string
 */

char *string_toupper(char *s)
{
int i = 0;

for (; s[i] != '\0' ; i++)
{
	if (s[i] >= 97 && s[i] <= 122)
	s[i] -= 32;
}

return (s);
}
