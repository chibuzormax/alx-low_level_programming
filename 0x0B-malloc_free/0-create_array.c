#include "main.h"

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: Character to work on
 *
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
