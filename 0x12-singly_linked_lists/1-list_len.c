#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
