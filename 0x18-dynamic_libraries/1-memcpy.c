#include "main.h"
/**
 * _memcpy - copies memory from src location to dest location
 * @dest:pointer to starting of dest address
 * @src:pointer to source memory area.
 * @n: bytes filled.
 * Return: ptr to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
