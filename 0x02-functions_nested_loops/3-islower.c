#include "main.h"
/**
  * _islower - checks lower case characters
  * @c: character to be checked
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}

}
