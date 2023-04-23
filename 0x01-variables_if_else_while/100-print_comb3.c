#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int ones = 'o';
	int tens = 'o';

	for (tens = 'o'; tens <= '9'; tens++)
	{
		for (ones = 'o'; ones <= '9'; tens++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
