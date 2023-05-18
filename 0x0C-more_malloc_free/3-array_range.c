#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 *
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (a = 0 ; min <= max ; min++, a++)
	{
		array[a] = min;
	}
	return (array);
}
