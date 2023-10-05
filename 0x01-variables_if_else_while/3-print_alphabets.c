#include <stdio.h>

/**
 * main - Letters in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		putchar(chars);
	}

	for (chars = 'A'; chars <= 'Z'; chars++)
	{
		putchar(chars);
	}

	putchar('\n');

	return (0);
}
