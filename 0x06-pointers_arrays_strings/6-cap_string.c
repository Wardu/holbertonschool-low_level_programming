#include "holberton.h"

/**
 * cap_string - copies a string
 * @a: source to copy string to
 *
 * Return: copied string
 */

char *cap_string(char *a)
{
char sep[] = {',', ';', '.', '?', '"', '(',
')', '{', '}', ' ', '\n', '\t', '!'};
int i, j, p;

for (i = 0 ; *(a + i); i++)
{
for (j = 0; *(sep + j); j++)
{
p = i + 1;
if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
{
a[i] -= 32;
}

if (a[p] != '\0' && a[p] >= 'a' && a[p] <= 'z' && a[i] == sep[j])
{
a[p] -= 32;
}
}
}
return (a);
}
