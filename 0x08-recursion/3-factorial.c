#include "main.h"

/**
 * factorial - the function that returns the factorial of a given number
 * @n: the given number
 * Return: n
 * chivicks can do it better
 */

int factorial(int n)

{
	int x;

	if  (x < 0)

	{
		return (-1);
	}
	else if (x == 0)

	{
		return (1);
	}
	else
	{
		x = n * (n - 1);
	}
	return (x);
}
