#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: pointer to string
 * Return: unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				len++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}

		s++;
	}

	return (len);
}

