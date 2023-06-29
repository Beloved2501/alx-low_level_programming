#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encode a string
 * @s: string variable
 * Return: Return s
 */
char *rot13(char *s)
{
	int a, b;
	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; m[b] != '\0'; b++)
		{
			if (s[a] == m[b])
			{
				s[a] = n[b];
				break;
			}
		}
	}
	return (s);
}
