#include <stdio.h>

/**
 * premain_text - functions that prints text before main is executed
 * Return: return void
 **/
void --attribute-- ((constructor)) premain_text(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
