#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry
 * @c: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 * or we can do by this way:
 * if (c >= 'a' && c <= 'z')
 * {
 * return (1);
 * }
 * else if (c >= 'A' && c <= 'Z')
 * {
 * return (1);
 * }
 * else
 * {
 * return (0);
 * }
 * }
*/
