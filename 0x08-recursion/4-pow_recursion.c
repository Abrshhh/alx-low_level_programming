#include "main.h"
#include <stdio.h>
#include <math.h>
int _pow_recursion(int x, int y)
int main ()
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
