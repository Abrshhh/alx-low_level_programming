#include <stdio.h>
#include "main.h"

/**
 * main - print number of argument passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
