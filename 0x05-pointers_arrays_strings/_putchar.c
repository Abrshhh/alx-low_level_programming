#include <unistd.h>
/**
 * _putchar - write
 * @c: succ1
 * Return: succ
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
