#include "holberton.h"

/**
 * main - use funcion _putchar
 * Description: output with return
 * Return: On success 0.
 */

int main(void)
{
int i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
