#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - function
 *
 *Return: always (0)
 */

int main(void)
{
	int n;

	n = _printf("hello %c", 'v');
	printf("\n n - %d \n", n);
	n = _printf("hello %s", 'victor');
	printf("\n n - %d \n", n);
	n = _printf("hello %%");
	printf("\n n - %d \n", n);
	return (0);
}
