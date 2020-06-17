#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int main(void)
{
int num = 98, i, s = 1, f = 0, a = 0;

for (i = 1 ; i <= num ; i++)
{
f = a + s;
a = s;
s = f;
printf("%i, ", f);
}
printf("\n");
return (0);
}
