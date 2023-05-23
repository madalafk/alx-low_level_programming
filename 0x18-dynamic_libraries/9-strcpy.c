#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy str from one location to the other one
 * @dest: pointer to dest where new copy is stored
 * @src: pointer to source str being copied
 * Return: a pointer to the destination(dest)
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
