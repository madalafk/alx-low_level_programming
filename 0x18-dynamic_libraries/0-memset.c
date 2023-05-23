#include "main.h"
/**
 * _memset - this fills the  memory with a const value
 * @s: pointer to the memory area.
 * @b: the const byte.
 * @n: the bytes in the memory area
 * Return: a pointer to destination memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
