#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char b;

	while (i++ <= 9)
	{
	for (b = 'a'; b <= 'z'; b++)
		_putchar(b);
	_putchar('/n');
	}
}
