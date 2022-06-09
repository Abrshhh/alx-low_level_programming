#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - backslash
 * @n: \print
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			putchar(' ');
				ii++;
		}
		putchar('\\');
		putchar('\n');
		i++;
	}
	if (i == 0)
		putchar('\n');
}

