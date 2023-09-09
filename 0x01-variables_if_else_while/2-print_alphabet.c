#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Return: 0 Always (Sucess)
*/

int main(void)
{
	char ch = "a";

	while (ch <= "z")
	{
		putchar(ch);
		ch++;
	}

	putchar("\n");
	return 0;
}	
