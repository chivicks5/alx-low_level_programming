#include "main.h"

/**
 * factorial - the function that returns the factorial of a given number
 * @n: the given number
 * Return: n
 * chivicks can do it better
 */

int factorial(int n)

{

	if  (n < 0)

	{
		return (-1);
	}
	else if (n == 0)

	{
		return (1);
	}
	else
	{
		return (n * (n - 1));
	}
}
