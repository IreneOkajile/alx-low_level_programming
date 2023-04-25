#include "main.h"
/**
  * _isalpha - check aphabetic characters.
  *
  * @c: is a character in ASCII code
  *
  * Return: 1 for alphabets and 0 when otherwise
  *
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
