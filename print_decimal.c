#include "main.h"

int print_decimal(int num)
{
	int count = 0;

	if (num / 10)
	{
		count += print_decimal(num / 10);
	}
	count += _putchar(num % 10 + '0');
	return (count);
}
