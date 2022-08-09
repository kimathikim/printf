#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int count, i;
	va_list data;
	va_start(data, format);
	for (i = 0; format[i] != '\0'; i++){

