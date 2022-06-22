#include "main.h"
/**
 * _pow_recursion - x val
 * @x: raised
 * @y: power
 * return: x to y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
