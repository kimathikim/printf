#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *string);
int _strlen(char *s);
char *chartos(char c);
char *nothing_found(char c);
char *rev_string(char *a, int n);
int print_decimal(int num);
#endif
