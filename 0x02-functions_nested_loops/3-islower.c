#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry
 * Description: checks is a character is lowercase
 * @c: the integer value it recieves
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	c = 'a';

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
