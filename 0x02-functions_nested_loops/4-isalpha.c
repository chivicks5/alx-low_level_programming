#include "main.h"
/**
 * _isalpha - checkd for alphabetic char
 * @c: char to be checked
 * Return: 1 if c is a char, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
