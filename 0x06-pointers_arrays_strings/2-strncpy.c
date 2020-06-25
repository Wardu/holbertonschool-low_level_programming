#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: source to copy string to
	* @src: source to copy string to
	* @n: source to copy string to
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0 ; j < n && dest[j] != '\0'; j++)
{
dest[j] = src[j];
}
for ( ; j < n ; j++)
{
dest[j] = '\0';
}
return (dest);
}
