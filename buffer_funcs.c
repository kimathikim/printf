#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * @bufferlen: current number of bytes taken by buffer
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i + bufferlen] = src[i];
	return (dest);
}

/**
 * alloc_buffer - allocates characters to buffer, with overflows
 * @hold: string to allocate into buffer
 * @hlen: hold length
 * @buffer: buffer char array
 * @size: end of buffer
 * @total: pointer to total character counter
 * Return: buffer length
 */

int alloc_buffer(char *hold, int hlen, char *buffer, int size, double *total)
{
	int sizecpy = 0;

	if (hlen + size > BUFSIZE)
	{
		sizecpy = BUFSIZE - size;
		_memcpy(buffer, hold, sizecpy, size);
		_puts(buffer, BUFSIZE);
		hold += sizecpy;
		_memcpy(buffer, hold, hlen - sizecpy, 0);
		size = hlen - sizecpy;
		*total += BUFSIZE;
	}
	else
	{
		_memcpy(buffer, hold, hlen, size);
		size += hlen;
	}
	return (size);
}
