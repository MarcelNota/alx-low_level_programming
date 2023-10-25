#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - see if is divisible.
 * @num: The number
 * @div: Divisor
 *
 * Return: If divisible - 0.
 *         If  not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - sees if its a prime number
 * @n: the number to be checked
 *
 * Return: 0 if false, 1 if true
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
