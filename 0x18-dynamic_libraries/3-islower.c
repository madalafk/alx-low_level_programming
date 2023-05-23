#include "main.h"
/**
 * _islower -function returns 1 if c is lowercase, else 0
 * @c: the char presented to be tested
 * Return: 1 if success or 0 if fails
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
