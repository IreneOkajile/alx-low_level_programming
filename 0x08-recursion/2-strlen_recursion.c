#include "main.h"
/**
 * factorial - find factorial of a number
 *
 * @n: the inputed argument
 *
 * Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n = 0 && n =1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
