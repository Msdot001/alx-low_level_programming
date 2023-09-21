#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 * @n: num of bytes to be append from src
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return(dest);
}
