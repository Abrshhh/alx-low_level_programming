#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -
 * @argc:
 * @argv:
 *
 * Return:
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

	sum =+ atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
		}
	}
}
