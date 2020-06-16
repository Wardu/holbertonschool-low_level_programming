#include "holberton.h"

/**
 * main - use funcion _putchar
 * Description: output with return
 * Return: On success 0.
 */

int main(void)
{
int i = 0;
char H[] = "Holberton\n";
while (i <= 10)
{
_putchar(H[i]);
i++;
}
return (0);
}
