#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
 * _printf - function
 *
 * @format: parameter
 *
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list data;

	va_start(data, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count = count + _putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
					{

			case 'c':
				count += _putchar (va_arg(data, int));
			break;
			case 's':
			count += print_string(va_arg(data, char *));
			break;
			case '%':
			count += _putchar('%');
			break;
			default:
			break;
					}
			i += 1;
		}
	}
	return (count);
}
