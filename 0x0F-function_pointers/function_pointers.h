#ifndef FILE_MAIN
#define FILE_MAIN

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
