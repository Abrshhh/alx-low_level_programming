#include <stdio.h>
#include "main.h"
/**
 * largest number - large
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest
 */
int largest_number(int a, int b, int c)
{
	int largest = b;
	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}
	return (largest);
}
