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

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);

}
