#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - 0-9
 * Description: print
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			putchar(a += '0');
		}
		a++;
	}
	putchar('\n');
}
