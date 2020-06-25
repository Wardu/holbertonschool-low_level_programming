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
int i = 0;

for (; i < n && src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
for (; i < n ; i++)
{
dest[i] = '\0';
}
return (dest);
}
