#include "main.h"
/**
 * _strchr -this will locate a char in a str.
 * @s: the  str.
 * @c: the char.
 * Return: pointer to the first occurrence of the char c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
