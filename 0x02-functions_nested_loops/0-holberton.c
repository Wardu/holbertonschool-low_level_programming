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
