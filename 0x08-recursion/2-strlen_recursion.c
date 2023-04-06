#include "main.h"

/**
 * _strlen_recursion - this funtion returns the length of a string
 * @s: the pointing string
 * Return:lenght of the string
 * chivicks is comming up
 */

int _strlen_recursion(char *s)

{
	int i = 0;
		if (*s)
		{
			i++;
			i += _strlen_recursion(s + 1);
		}
		return (i);
}
