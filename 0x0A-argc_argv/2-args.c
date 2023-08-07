#include <stdio.h>
#include "main.h"
/*
 * @argc - no of arguments
 * @argv - array of strings of arguments
 * @main
 */
int main(int argc, char *argv[])
{
        int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return(0);
}
