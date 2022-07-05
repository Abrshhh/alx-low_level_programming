#include <unistd.h>
/**
 * _putchar - writes char
 * @c: char print
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
