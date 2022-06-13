#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string and new line
 * @str: str
 * return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
