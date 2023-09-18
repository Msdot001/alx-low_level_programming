#include "main.h"
/**
 * _strlen - to returns the length of a string
 * @s: define pointer of char data type
 * Return: integer value
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return len;
}
