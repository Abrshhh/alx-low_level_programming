#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry
 * Description: print alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
