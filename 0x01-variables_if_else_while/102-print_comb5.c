#include <stdio.h>

/**
 * main - use for
 * Description: use putchar to numbers
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9' ; a++)
	for (b = '0'; b <= '9' ; b++)
	{
		putchar(a);
		putchar(b);
		if (a != '9' || b != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}