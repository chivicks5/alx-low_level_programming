#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 * by chivicks
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = malloc(size * sizeof(char));
	/* Removed unnecessary cast and optimized size calc. */
	if (array == NULL)
	{
		/* Error handling - failed to allocate memory */
		perror("Error: Failed to allocate memory for array");
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	/* Moved variable declaration to loop */
		array[i] = c;

	return (array);
}
