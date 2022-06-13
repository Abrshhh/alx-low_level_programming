#include "main.h"
/**
 * *_strcpy - cp
 * @dest: char
 * @src: char
 * Description: cp
 * return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
