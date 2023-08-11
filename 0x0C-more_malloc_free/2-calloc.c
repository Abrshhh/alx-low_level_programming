#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates meomry of an array
 * @nmemb: number of element of array
 * @size: size of array
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;
	ptr = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
		ptr[i] = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
