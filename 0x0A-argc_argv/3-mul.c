#include <stdio.h>
#include "main.h"
/*
 * main : prints all function it recieves
 * @argc: prints the number of arguments
 * argv: prints string of arguments
 * return: always 0 (completed)
 */
int _atoi(char *s)
int main(int argc, char *argv[])
{
	int product = 0;
	product = _atoi(argv[1]) * _atoi(argv[2]);
	if (argc == 3)
{
	printf("%d\n", product);

return(0);
}
	else
{

	printf("Error\n");
	return(1);
}
}
