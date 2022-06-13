#include"main.h"
/**
 * puts2 - xters
 * @str: ref
 * return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
{
	if (i % 2 == 0)
	{
		putchar(str[i]);
	}
	i++;
}
putchar('\n');
}

