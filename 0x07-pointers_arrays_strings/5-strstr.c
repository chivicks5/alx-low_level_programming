#include "main.h"

/**
 * _strstr - Find the first occurrence of a substring in a string.
 * @neddle:the occurance of the substring
 * @haystack:the longer string to be checked
 * Return: null or pointer to the beginning of the located substring
 *code by chivicks
*/

char *_strstr(char *haystack, char *needle)
{
	char *start;

	while (*haystack != '\0')
	{

		start = haystack;

		while (*needle != '\0' && *haystack != '\0' && *haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			return (start);
		}

		haystack = start + 1;
		needle -= haystack - start;
	}

	return (NULL);
}

