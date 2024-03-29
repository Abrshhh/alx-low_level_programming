#include<stdlib.h>
#include"main.h"
/**
 * *array_range - create an array of integer
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *ptr;

	if (min > max)
		return NULL;
	
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	
	 if (ptr == NULL)
                return (NULL);

	for (i = 0; i <= max; i++)
		ptr[i] = min++;
		
	return (ptr);
}
