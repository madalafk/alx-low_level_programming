#include "main.h"
/**
  * print_alphabet_x10 - make alphabet x10
  *
  * Return: void
  */
void print_alphabet_x10(void)
{

	char k;
	int i = 0;

	while (i <= 9)
	{
	for (k = 'a'; k <= 'z'; k++)

	{
		_putchar(k);
	}

	_putchar('\n');
		i++;
	}
}
