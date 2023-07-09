#include "main.h"

/**
 * _atoi - change a string to an integer
 * @s: integer variable
 * Return: Return void
 */
int _atoi(char *s)
{
	int a, b, c, size, d, e;

	a = 0;
	b = 0;
	c = 0;
	size = 0;
	d = 0;
	e = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	while (a < size && d == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
			e = s[a] - '0';
			if (b % 2)
				e = -e;
			c = c * 10 + e;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);

	return (c);
}
