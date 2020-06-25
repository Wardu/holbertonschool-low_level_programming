#include "holberton.h"
/**
 * _atoi - copies a string
 * @s: source to copy string to
 *
 * Return: copied string
 */
int _atoi(char *s)
{
	int i, j, k = 0;

	for ( i = 0 ; s[i] != 0 ; i++ )
		{
			if (s[i] == '-')
			j++;
			if ((s[i] >= '0') && (s[i] <= '9'))
			{
				s[k] = s[i];
				k++;
			}
		}
		if (j % 2 == 0)
		return (s)
		else
		return (-s);
}
