#include "main.h"

/**
 * _puts - this  prints a str, followed by a new line,
 * @str: a pointer to the string to be  printed
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
