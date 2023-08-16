#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to comparing fn
 *
 * Return:  index of the first element for which
 * the cmp function does not return 0
 * if no element matches -1
 * if size <= 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
