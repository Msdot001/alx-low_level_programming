#include "main.h"

/**
 * swap_int - to swaps the values of two integers.
 * @a: rep pointer with int type
 * @b: rep pointer with int type
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
