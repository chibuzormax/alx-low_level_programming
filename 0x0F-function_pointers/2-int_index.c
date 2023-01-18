#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @size: Number of elements in the array
 * @array: Array to search
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
