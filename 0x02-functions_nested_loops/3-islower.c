#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @r: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int r)
{
if ((r >= 'a') && (r <= 'z'))
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
