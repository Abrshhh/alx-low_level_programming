#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints an name
 * @name: name to be printed
 * @f: pointer to the function that prints name
 *
 * Return: always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
