#include "main.h"
/**
 * _islower - check if the function is lowercase
 * Return: 1 if char is lowercase, else 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
