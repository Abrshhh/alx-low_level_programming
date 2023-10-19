#include <stdio.h>
#include "main.h"
/**
 * _isupper - check uppercas
 * @c: int
 * Return: 1 true, 0 is false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
