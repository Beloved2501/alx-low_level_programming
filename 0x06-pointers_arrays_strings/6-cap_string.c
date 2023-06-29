#include "main.h"

/**
 * cap_string - capitalize all words in the string
 * @n: value of string
 *
 * Return: return n
 */
char *cap_string(char *n)
{
	int a;

	a = 0;
	if (n[a] >= 97 && n[a] <= 122)
	{
		n[a] = n[a] - 32;
	}
	for (a = 0; n[a] != '\0'; a++)
	{
		switch (n[a])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[a + 1] > 96 && n[a + 1] < 123)
				{
					n[a + 1] = n[a + 1] - 32;
				}
		}
	}
	return (n);
}
