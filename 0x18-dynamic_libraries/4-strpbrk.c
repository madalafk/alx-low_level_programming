#include "main.h"

/**
 * _strpbrk - search first occurrence of any char in a set of chars in a str
 * @s: first str
 * @accept: second str
 * Return: pointer to the first occurrence if char from str2 is also in str2
 * else NULL if no matching char is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
