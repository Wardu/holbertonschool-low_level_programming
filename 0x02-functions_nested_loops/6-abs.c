#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @r: The character to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int r)
{
if (r > 0)
{
return (r);
}
else if (r == 0)
{
return (r);
}
else
{
r *= -1;
return (r);
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

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
