#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry
 * @n: n is integer
 * Description: prints the absolute value
 * Return: int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
}
