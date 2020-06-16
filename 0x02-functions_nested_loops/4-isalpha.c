#include <unistd.h>

/**
 * _isalpha - check for alphabetic character.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
