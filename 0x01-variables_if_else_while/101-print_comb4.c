#include <stdio.h>

/**
 * main - printing combination of three numbers
 *Description: print all possible combinations
 * return: always (Sucess)
 */
int main(void)
{
	int c;
	int i;
	int k;
	
	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (c < i && i < k)
				{
					putchar(c);
					putchar(i);
					putchar(k);
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
