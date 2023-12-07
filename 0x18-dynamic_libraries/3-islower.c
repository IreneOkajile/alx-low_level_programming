#include "main.h"
/**
  * _islower - checks for lower case characters
  *
  * Return: return 1 for lowercase and 0 for otherwise scenario
  *
  * @c: an ASCII code character
  *
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{	return (0);
	}
	_putchar('\n');
}
