#include <unistd.h>

/**
 *  * _putchar - displays c
 *   * @c: pointer
 *    *
 *     * Return: 1
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
