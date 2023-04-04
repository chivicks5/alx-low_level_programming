#include "main.h"

/**
 * _memcpy - function copies memory area @src
 * to memory area @dest
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return:dest
 * code by chivicks
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

