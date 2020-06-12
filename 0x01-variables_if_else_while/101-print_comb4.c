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

	for (e = '0' ; e <= '9' ; e++)
	{
		for (d = '1' ; d <= '9' ; d++)
		{
			for (c = '2' ; c <= '9' ; c++)
			{
				if ( e == '7' && d == '8' && c == '9')
				{
				break;
				}
				else if (e < d)
				{
					if (d < c)
					{	
				putchar(e);
				putchar(d);
				putchar(c);
				putchar(',');
				putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
