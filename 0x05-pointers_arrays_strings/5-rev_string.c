#include "main.h"

/**
 * rev_string - to reverses a string
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while ( s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
