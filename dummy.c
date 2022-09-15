#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
void print_num(unsigned int num)
{
    // 123
    int i = 0;
    int size = 0;
    int rev[size];
    while (num / 10)
    {

        rev[i] = (num % 10) + '0';

        num = num / 10;
        size++;
        i++;
    }
    rev[i] = (num % 10) + '0';
    while (i >= 0)
    {
        putchar(rev[i]);
        i--;
    }
}
void var(const unsigned int n, ...)
{
    unsigned int digit, i = n;

    va_list(all);
    va_start(all, n);
    while (i > 0)
    {
        digit = va_arg(all, int);
        print_num(digit);
        printf("\n");

      i--;  
    }
    va_end(all);
}

int main()
{
    const unsigned int n = 2;
    unsigned int i, j;
    i = 1234;
    j = 200;
    var(n, i, j);
    return (0);
}