#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
}
