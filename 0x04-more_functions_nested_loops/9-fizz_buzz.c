#include <stdio.h>

/**
 * main - The Fizz-Buzz test.
 * Description: output with return
 * Return: On success 0.
 */

int main(void)
{
int i = 1;

	while (i <= 100)
	{
		if (((i % 3) ||  (i % 5)) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
	printf(" ");
	i++;
	}
	printf("\n");
	return (0);
}
