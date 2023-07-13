#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates array of integers
 * @min: minimum integer in array
 * @max: maximum integer in array
 * Return: Return pointer array or Null
 **/
int *array_range(int min, int max)
{
	int *array;
	int a, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		array[a] = min++;
	return (array);
}
