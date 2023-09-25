#include "main.h"

/**
 * _memcpy - copy memory area.
 * @dest: pointer that receive copies area
 * @src: pointer where area is copies from
 * @n: num of memory that occupie
 * Return: pointer to another pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *memCpy = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (memCpy);
}
