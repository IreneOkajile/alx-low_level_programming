#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lu;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lu = 'a'; lu <= 'f'; lu++)
		putchar(lu);

	putchar('\n');

	return (0);
}
