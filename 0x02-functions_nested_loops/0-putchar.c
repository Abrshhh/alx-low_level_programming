#include <stdio.h>
/**
 * main - Entry
 * Description: print _putchar \n
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int x =0;
	
	while (str[x] != '\0')
			{
			char c = str[x];
			
			_putchar(c);
			x++;
			}
	return (0);
	}
