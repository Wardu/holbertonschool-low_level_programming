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
	char c;

	for (c = 48 ; c < 58 ; c++)
	{
	putchar(c);
	}
	for (c = 97 ; c < 103 ; c++)
	{
	putchar(c);
	}
	putchar('\n');

return (0);
}
