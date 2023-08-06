#include <stdio.h>
#include "main.h"
/*
 * main : prints all function it recieves
 * @argc: prints the number of arguments
 * argv: prints string of arguments
 * return: always 0 (completed)
 */
int main(int argc, char *argv[])
	int sum;
	sum = atoi(argv[1]) + atoi(argv[2]);
	if (argc == 3)
{
	printf("%d\n", sum);
}
return(0);
	else
{
	printf("Error");
	return(1);
}
