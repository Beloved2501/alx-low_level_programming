#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function pointers
 * @name: name to be printed
 * @f: function pointer to a function that prints name
 * Return: Return void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
