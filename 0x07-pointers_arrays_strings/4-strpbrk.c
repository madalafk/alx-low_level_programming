#include "main.h"
/**
 * _strpbrk - Entry point
 * @x: input
 * @accept: input
 * Return: Always 0. (Success)
 */
char *_strpbrk(char *x, char *accept)
{
		int y;

		while (*x)
		{
			for (y = 0; accept[y]; y++)
			{
			if (*x == accept[y])
			return (x);
			}
		x++;
		}

	return ('\0');
}
