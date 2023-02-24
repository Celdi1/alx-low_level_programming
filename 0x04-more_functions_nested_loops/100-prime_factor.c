#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the largest prime number
 *
 * Return: void
 */
int main(void)
{
	long prime = 612852475143, div;

	while (dev < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (dev = 3; dev < (prime / 2); dev += 2)
		{
			if ((prime % dev) == 0)
				prime /= dev;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
