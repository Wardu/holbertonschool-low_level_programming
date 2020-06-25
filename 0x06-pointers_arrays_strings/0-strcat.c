#include "holberton.h"

/**
 * _strcat - copies a string
 * @dest: source to copy string to
	* @src: source to copy string to
 *
 * Return: copied string
 */

char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0 ; dest[i] != '\0' ; i++)
{
}
for (j = 0 ; src[j] != '\0' ; j++)
{
dest[i++] = src[j];
}
return (dest);
}
