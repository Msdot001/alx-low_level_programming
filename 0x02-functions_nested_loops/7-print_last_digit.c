#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @i: the int to check
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');

	return (last);
}
