#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count the number of command line
 * @argv: arguments for arrays of pointer
  by chivicks 
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", basename(argv[0]));
	return (0);
}
