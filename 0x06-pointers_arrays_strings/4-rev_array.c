#include "holberton.h"

/**
 * _strcmp - copies a string
 * @s1: source to copy string to
	* @s2: source to copy string to
 *
 * Return: copied string
 */

void reverse_array(int *a, int n)
{
  int i, j;

  for (i = 0 ; i < n - i ; i++)
  {
    j = a[i];
    a[i] = a[(n - 1) - i];
    a[(n - 1) - i] = j;
  }
}
