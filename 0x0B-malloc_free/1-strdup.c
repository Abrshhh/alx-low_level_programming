#include <stdlib.h>
#include "main.h"
/*
 * *_strdup - copy string given as argument
 * @str: str to duplicate
 *
 * Return: NULL if str NULL, duplicate string pointer (success)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
