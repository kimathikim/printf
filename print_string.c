#include "main.h"

/**
 * print_string -function to count characters
 *@string: parameter
 *Return: count
 */

int print_string(char *string)
{
	int count = 0;
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
