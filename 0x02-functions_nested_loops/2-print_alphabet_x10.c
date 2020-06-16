#include <unistd.h>
#include "holberton.h"

/**
 * main - use funcion _putchar
 * Description: output with return
 * Return: On success 0.
 */

void print_alphabet_x10(void)
{
int i = 'a', n = 0;

while (n <= 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
i = 'a';
_putchar('\n');
n++;
}
}
