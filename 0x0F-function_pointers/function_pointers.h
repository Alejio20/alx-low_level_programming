#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

typedef unsigned int size_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /*_FUNCTION_POINTERS_H_*/
