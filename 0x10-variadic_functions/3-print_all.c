#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints all formats arguments
 * @format: list the type of argument passed to the function
 * Return: Return void
 **/
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
	char *ptr, *str = "";

	va_start(args, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", str, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(args, double));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", str, ptr);
					break;
				default:
					j++;
					continue;
			}
			str = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(args);
}
