#ifndef LISTS_H
#define LISTS_H

/**
 *
 */

typedef struct list_x
{
	char *str;
	unsigned int len;
	struct list_x *next;
}list_t;

size_t print_list(const list_t *h);


#endif
