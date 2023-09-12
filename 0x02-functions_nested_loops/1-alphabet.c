#include "main.h"
/**
 * main - Entry point:
 *
 * Description:  prints lowercase alphabet
 * Return: Always void.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
