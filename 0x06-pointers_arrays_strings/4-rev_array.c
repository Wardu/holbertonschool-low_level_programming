#include "holberton.h"

/**
 * reverse_array - copies a string
 * @a: source to copy string to
	* @n: source to copy string to
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
