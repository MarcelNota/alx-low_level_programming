#include "main.h"

/**
 * find_strlen - displays string size
 * @s: pointer
 *
 * Return: string size
 */

int find_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + find_strlen(s +  1));
}


/**
 * check_palindrome - sees if it palindrome
 * @s: The string
 * @len: The size
 * @i: index
 *
 * Return: If palindrome - 1.
 *         If not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
