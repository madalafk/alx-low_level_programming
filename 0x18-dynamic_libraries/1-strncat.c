#include "main.h"
/**
 * _strncat - this  concatenates two strings with a given limit,
 * @dest: pointer to a starting address of the destination memory block
 * @src: pointer to a starting address of the source memory block
 * @n: the bytes used from the src.
 * Return: pointer to the dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
