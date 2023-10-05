#include <stdio.h>

/**
  * main - Alphabet in reverse
  *
  * Return: 0
  */
int main(void)
{
	char alpharev;

	for (alpharev = 'z'; alpharev >= 'a'; alpharev--)
	{
		putchar(alpharev);
	}

	putchar('\n');

	return (0);
}
