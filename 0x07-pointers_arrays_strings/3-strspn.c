#include "main.h"
/**
 * _strspn - Entry point
 * @x: input
 * @accept: input
 * Return: Always 0. (Success)
 */
unsigned int _strspn(char *x, char *accept)
{
	unsigned int n = 0;
	int y;

	while (*x)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*x == accept[y])
			{
				n++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (n);
		}
		x++;
	}
	return (n);
}
