#include <unistd.h>

/**
 * _putchar - main
 * @c: arg
 * Return: stdout , for &c , byte1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
