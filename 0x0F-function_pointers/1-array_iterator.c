#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to function to be executed
 * Return: Return void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}
}
