#include <unistd.h>
/**
 * _putchar - function
 *
 * @c: parameter
 *
 * Return: write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
