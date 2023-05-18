#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: array elements
 *
 * @size: bytes of the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *array;

	b = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(b);

	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < b ; a++)
	{
		array[a] = 0;
	}
	return (array);
}
