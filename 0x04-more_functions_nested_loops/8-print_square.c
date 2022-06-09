#include <stdio.h>
#include "main.h"
/**
 * print_square - dig
 * @n: print it
 * Return: void
 */
 void print_square(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			putchar('#');
			ii++;
		}
		putchar('\n');
		i++;
	}
	if (i == 0)
		putchar('\n');
}	
