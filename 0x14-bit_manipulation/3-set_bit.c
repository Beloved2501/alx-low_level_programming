#include "main.h"

/**
 * set_bit - function that set the value of bit to 1 at a given index
 * @n: pointer to the value of bit
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error occured
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
