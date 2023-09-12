#include "main.h"
/**
 * print_sign - print number sign
 * @n: is the int to be checked
 * Return: 1 if +, 0 if zero and esle -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
