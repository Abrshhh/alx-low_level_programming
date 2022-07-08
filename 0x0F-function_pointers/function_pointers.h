#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/*
 * Desc: header
 */
 #include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
