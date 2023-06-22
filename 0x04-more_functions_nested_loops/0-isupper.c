#include "main.h"
#include <stdio.h>

/**
 * _isupper - Displays the uppercase character
 * @c: Variable name
 *
 * Return: Always in 0
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
