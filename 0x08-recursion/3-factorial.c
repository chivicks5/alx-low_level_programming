#include "main.h"

/**
 * factorial - the function that returns the factorial of a given number
 * @n: the given number
 * Return: n
 * chivicks can do it better
 */

int factorial(int n)

{
	int y;

	if  (y < 0)

	{
		return (-1);
	}
	else if (y == 0)

	{
		return (1);
	}
	else
	{
		y = n * (n - 1);
	}
	return (y);
}
