#include "main.h"

/**
 * _pow_recursion - the function that returns the value
 * of x raise it to the power of y
 * @x: the base value
 * @y: the index
 * Return: -1 @y <0 and 1 @y >= 0
 * chivicks coding
 */

int _pow_recursion(int x, int y)

{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * power(x, y - 1));
	}
}
