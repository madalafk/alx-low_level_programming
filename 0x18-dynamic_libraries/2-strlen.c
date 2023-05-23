#include "main.h"

/**
 * _strlen - returns str length.
 * @s: the input str.
 * Return:the length of a str
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
