#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char ja;

	for (ja = 'z'; ja >= 'a'; ja--)
		putchar(ja);

	putchar('\n');

	return (0);
}
