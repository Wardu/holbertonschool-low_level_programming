#include <stdio.h>

/**
 * main - Entry a number to the variable c and print character.
 *
 * Description: Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 97 ; c < 123 ; c++)
	{
		if (c == 101 || c == 113)
		{
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
return (0);
}
