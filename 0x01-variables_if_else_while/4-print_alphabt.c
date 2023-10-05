#include <stdio.h>

/**
  * main -prints letters
  *
  * Return: 0
  */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		if (chars != 'e' && chars != 'q')
		{
			putchar(chars);
		}
	}

	putchar('\n');

	return (0);
}
