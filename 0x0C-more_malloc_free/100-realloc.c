#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocate memory block 
 * @ptr: pointer to memory previous
 * @old_size: size of allocated memory
 * @new_size: new size of new memory block
 *
 * Return: pointer to newly allocated meomry block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;
	
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free (ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free (ptr);
	return (ptr1);
}
