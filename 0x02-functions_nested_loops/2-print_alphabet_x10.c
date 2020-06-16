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
int i = 'a', n = 0;

while (n <= 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
i = 'a';
_puthcar('\n');
n++;
}
return (0);
}
