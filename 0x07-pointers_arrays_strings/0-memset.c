#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory address
 * @b: contant byte to be fiiled as value
 * @n: num of memory to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *memSet = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (memSet);
}
