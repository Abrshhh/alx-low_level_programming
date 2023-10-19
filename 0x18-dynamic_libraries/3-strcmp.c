#include "main.h"
/**
 * _strcmp - compare pointer to str
 * @s1: pointer to 1st str
 * @s2: pointer to 2nd str
 * Return: if str1 < str2 diff of chr
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
