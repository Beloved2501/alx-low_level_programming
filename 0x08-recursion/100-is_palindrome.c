#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: variable name
 * Return: Return the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * is_drome_recursive - checks if two chars of a string are equal
 * @s: variable to be checked
 * @m: first variable
 * @p: last variable
 * Return: Return 1 if equal, else 0
 */
int is_drome_recursive(char *s, int m, int p)
{
	if (m == p)
		return (1);
	if (m == p - 1)
		return (s[m] == s[p]);
	if (s[m] != s[p])
		return (0);
	return (is_drome_recursive(s, m + 1, p - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string variable
 * Return: 1 if string is palindrome else 0
 */
int is_palindrome(char *s)
{
	int size;

	size = _strlen_recursion(s);
	if (size == 0 || *s != s[size - 1])
		return (0);
	return (is_drome_recursive(s, 0, size - 1));
}
