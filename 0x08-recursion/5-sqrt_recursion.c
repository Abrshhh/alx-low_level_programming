#include "main.h"
int _realsqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_realsqrt_recursion(n, 0));
}
int _realsqrt_recursion(int n, int i)
{
	if (n == i * i)
		return (i);
	if (n > i * i)
		return (-1);
	return (_realsqrt_recursion(n, i + 1);
}
