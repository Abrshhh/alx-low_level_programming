#include <stdio.h>
#include "main.h"
/**
 * _strlen - length of string
 * @s: string
 * Return: int length string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
