#include <stdio.h>

/**
 * main - Entry a number to the variable n and print character.
 *
 * Description: Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int d = 0, c = 0, b = 0, a = 1;

for (d = '0' ; d <= '9' ; d++)
{
for (c = '0' ; c <= '8' ; c++)
{
for (b = '0' ; b <= '9' ; b++)
{
for (a = '1' ; a <= '9' ; a++)
{
putchar(d);
putchar(c);
putchar(' ');
putchar(b);
putchar(a);
if ((d == '9' && c == '8') && (b == '9' && a == '9'))
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
