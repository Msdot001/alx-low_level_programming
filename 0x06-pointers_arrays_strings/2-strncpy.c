#include "main.h"
/**
* _strncpy - to copies the string
* @dest: pointer where the text is append
* @src: array with the string
* @n: num of bytes to append
* Return: Always 0
*/
char * _strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
