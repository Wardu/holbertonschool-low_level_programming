#include "holberton.h"

/**
 * _strncat - copies a string
 * @dest: source to copy string to
	* @src: source to copy string to
	* @n: source to copy string to
 *
 * Return: copied string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0 ; dest[i] != '\0' ; i++)
{
}
for (j = 0 ; src[j] != '\0' && j < n; j++)
{
dest[i++] = src[j];
}
return (dest);
}
