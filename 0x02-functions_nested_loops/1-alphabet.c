#include <stdio.h>
/**
 * print alphabet -entry
 * Description: print alphabet in lowercase
 * Return: void
 */
void print_alphabet(void);

	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

