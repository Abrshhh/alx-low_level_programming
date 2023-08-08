#include <stdlib.h>
#include "main.h"
/* 
 * @c: initialized char
 * @create array: creates an array of chars,
 * and initializes it with a specific char
 * Return: pointer to array if success, NULL if fail
 */
char *create_array(unsigned int size, char c)

{
	char *pointer;
	unsigned int integer = 0;

	if (size == 0)
	{
		return (NULL);
	}
	pointer = (char *) malloc(sizeof(char) * size);

	if (pointer == NULL)
	{
		return (0);
	}

	while (integer < size)
	{
		*(pointer + integer) = c;
		integer++;
	}

	*(pointer + integer) = '\0';
	return (pointer);
}
