#include <stdio.h>
/**
 * main - program that finds and prints the largest prime factor of the number
 *
 * Return: int - 0 is success
 */
int main(void)
{
	unsigned int i, j, prime, fac_prime;
	unsigned long n = 612852475143;

	for (i = 1 ; i <= n ; i++)
	{
		if (n % i == 0)
		{
			prime = 0;
			for (j = 1 ; j <= i ; j++)
			{
				if (i % j == 0)
				prime++;
			}
				if (prime == 2)
				fac_prime = i;
		}
	}
	printf("%d\n", fac_prime);
	return (0);
}

