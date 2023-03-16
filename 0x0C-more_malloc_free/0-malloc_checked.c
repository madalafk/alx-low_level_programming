#include "main.h"

/**
* malloc_checked - cause normal process termination with a status value of 98
*
* @k: allocated memory
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int k)
{
	void *x;

	x = malloc(k);
	if (x == NULL)
		exit(98);
	return (x);
}
