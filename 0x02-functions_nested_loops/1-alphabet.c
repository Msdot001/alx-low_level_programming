#include "main.h"
/**
 * main - Entry point:
 *
 * print_alphabet -  prints the lowercase alphabet from 'a' to 'z'
 *              using a loop and the putchar function.
 * Return: Always 0.
 */
void print_alphabet(void)
/* print_alphabet -  prints the lowercase alphabet */
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
