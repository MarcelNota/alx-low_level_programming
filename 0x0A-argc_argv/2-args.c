#include <stdio.h>

/**
 * main - program
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[i - 1]);
	}
	return (0);
}

