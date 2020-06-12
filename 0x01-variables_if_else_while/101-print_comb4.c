#include <stdio.h>

/**
 * main - Entry a number to the variable n and print character.
 *
 * Description: Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d, e;

	for (e = '0' ; d <= '9' ; e++)
	{
		for (d = '1' ; d <= '9' ; d++)
		{
			for (c = '2' ; c <= '9' ; c++)
			{
				if (e == '0' || e == '1' || e == '2')
				{
					if (d == '0' || d == '1' || d == '2')
					{
						if (c == '0' || c == '1' || c == '2')
						{
						break;
						}
					}
				}
				putchar(e);
				putchar(d);
				putchar(c);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
