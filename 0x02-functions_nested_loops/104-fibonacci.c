#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int main(void)
{
int num = 100, i, s = 0, f = 0, a = 1;

for (i = 1 ; i <= num ; i++)
{
f = a + s;
s = a;
a = f;
printf("%i, ", f);
}
printf("\n");
return (0);
}
