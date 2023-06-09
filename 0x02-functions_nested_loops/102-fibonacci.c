#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i, n = 50;

	long long fib1 = 1, fib2 = 2, fib3 = 3;

	printf("%lld, %lld", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		fib3 = fib1 + fib2;
	printf(", %lld", fib3);

	fib1 = fib2;
	fib2 = fib3;
	}
	printf("\n");
	return (0);
}
