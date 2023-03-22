#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_

#include <stdlib.h>
#include <stddef.h>


/**
* int_index -  returns the index of the first element if cmp = 0
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
*
*/

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int)); ls

#endif
