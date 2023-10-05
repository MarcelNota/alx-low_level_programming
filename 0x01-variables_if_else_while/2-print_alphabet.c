#include <stdio.h>

/**
 * main - print letter
 *
 * Return: 0
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
		putchar(chars);

	putchar('\n');
	return (0);
}
