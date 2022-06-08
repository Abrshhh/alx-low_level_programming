#include <stdio.h>
#include "main.h"
/**
 * pritn_alphabet _x10 - ten times
 * main - entry
 * Description: 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
