#include "main.h"

/**
 * puts2 - to every other character of a string,starting from begin
 * @str: pointer to char data type
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;

	while ( str[len] != '\0')
	{
		printf("%c", str[len]);
		len += 2;
	}
	printf("\n");
}
