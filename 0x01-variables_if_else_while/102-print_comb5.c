#include <stdio.h>

/**
 * main - Entry a number to the variable n and print character.
 *
 * Description: Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
int a, b;

	for (a = 48, b = 49; a < 58; a++)
	{
		while (b < 58)
		{
			if (a != b)
			{
				if (b > a)
				{
					putchar(a);
					putchar(b);
					if (a < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			b++;
		}
		b = 49;
	}
	putchar('\n');
	return (0);
}
