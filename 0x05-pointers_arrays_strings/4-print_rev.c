#include "main.h"
/**
 * print_rev - ptints string in reverse
 * @s: string
 * return: Always 0 (success)
 */
void print_rev(char *s)
{

	int longint = 0;
	int o;

	while (*s != '\0')
	{
		longint++;
		s++;
	}
	s--;
	for (o = longint; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
