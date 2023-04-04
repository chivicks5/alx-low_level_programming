#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: first occurrence of the character
 *
 * @s: the string
 *
 * Return: a pointer to the first occurrence of the character(null)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
