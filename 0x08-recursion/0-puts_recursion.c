#include "main.h"

/**
 * _puts_recursion - the function that prints string followed by a new line
 * @s: pointer to the string
 * Return: (void)
 * chivicks code
 */

void _puts_recursion(char *s);
{

	if (*s)

	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
