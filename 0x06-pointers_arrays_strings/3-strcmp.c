#include "holberton.h"

/**
 * _strcmp - copies a string
 * @s1: source to copy string to
	* @s2: source to copy string to
 *
 * Return: copied string
 */

int _strcmp(char *s1, char *s2)
{
int c1 = *s1, c2 = *s2;

do {
c1 = *s1++;
c2 = *s2++;
if (c1 == '\0')
return (c1 - c2);
} while (c1 == c2);

return (c1 - c2);
}
