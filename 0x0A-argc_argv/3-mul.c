#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * main - prints all function it recieves
 * @argc: prints the number of arguments
 * argv: prints string of arguments
 * Return: always 0 (completed)
 */
int main(int argc, char *argv[])
{
	int product = 0;
	
	product = atoi(argv[1]) * atoi(argv[2]);
	
	if (argc == 3)
	{
	printf("%d\n", product);
	return (0);
	}
	
	else
	{
	printf("Error\n");
	return (1);
	}
}
