#include "main.h"
/**
 * _isalpha - if c is a letter fuction returns 1
 * @c: the int to be tested
 * Return: 1 on success else  0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
