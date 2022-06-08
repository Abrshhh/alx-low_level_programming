#include <stdio.h>
#include "main.h" 
/**
 * print alphabet -entry
 * Description: print alphabet in lowercase
 * Return: void
 */
void print_alphabet(void);
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
