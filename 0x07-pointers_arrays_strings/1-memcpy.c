#include "main.h"
/**
 * *_memcpy - copy
 * @dest: memory
 * @src: source
 * @n: length
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
