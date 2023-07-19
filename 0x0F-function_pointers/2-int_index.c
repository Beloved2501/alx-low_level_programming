#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: number of elements in array
 * @cmp: pointer to the function used to compare value
 * Return: first element index on success or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL && cmp == NULL && size <= 0)
		return (-1);
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}
	return (-1);
}
