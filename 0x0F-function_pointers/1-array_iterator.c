#include "function_pointers.h"
/**
 * array_iterator - exe
 * @array: the array
 * @action: the action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
