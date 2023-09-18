#include "main.h"

/**
 * puts_half - to prints half of a string
 * @str: pointer of str data type
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}

	half = len/2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}

