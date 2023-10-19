#include <stdio.h>
/*
 * main - prints a[2] = 98, followed by a new line.
*/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	* main - prints an array nnumber
	* the code comes here:
	* Remember:
	* - you cannot allowed to use a
	* - you cannot allowed to modify p
	* - one statement only
	* - you cannot code anything else than this line of code
	*/
	p[5] = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
