#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocate memory
 * @b: number of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;
		ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return(ptr);
}

