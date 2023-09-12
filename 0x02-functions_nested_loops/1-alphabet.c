#include "main.h"
/**
 * main - print lower alphabet
 *
 * Description: It prints the lowercase alphabet from 'a' to 'z'
 *              using a loop and the putchar function.
 * Return: Always 0.
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

