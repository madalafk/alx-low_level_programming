#include "main.h"
/**
 * _strncpy - copies char from src str to dest str
 * @dest: pointer to a dest str where the char will be copied to
 * @src: pointer to a source str
 * @n: bytes used from src.
 * Return: pointer to the dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
