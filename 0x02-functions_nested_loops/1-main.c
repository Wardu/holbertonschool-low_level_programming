#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
int i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
