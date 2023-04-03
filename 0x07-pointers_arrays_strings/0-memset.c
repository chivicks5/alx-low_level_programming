#include "main.h"

/**
 * _memset - function fill the memory with a constant byte
 * to by @s with the constant byte @b
 * @n: bytes of the memory area pointed to by @s
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return:s
 * chvicks code
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)

	{
		s[i] = b;
	}
	return (s);
}

