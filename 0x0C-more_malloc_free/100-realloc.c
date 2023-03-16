#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previsouly allocated by malloc
* @old_size: size of the allocated memory for ptr
* @new_size: new size of the new memory block
*
* Return: pointer allocate new size memory, or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int i, n = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		x = malloc(new_size);
		return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)

		return (ptr);
	x = malloc(new_size);

	if (x == NULL)

		return (NULL);

	if (new_size > old_size)

	n = old_size;

	for (i = 0; < n; i++)

		x[i] = oldptr[i];
	free(ptr);
	return (x);
}


