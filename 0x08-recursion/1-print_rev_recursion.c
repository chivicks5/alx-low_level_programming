#include "main.h"

/**
 * _print_rev_recursion - the function that prints string in reverse
 * @s: the pointing string
 * Return: void
 * chivicks code
 */

void _print_rev_recursion(char *s)

{
	if (*s != '\0')

	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
