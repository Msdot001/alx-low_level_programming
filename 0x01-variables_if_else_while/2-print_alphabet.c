#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int n = 0;
	/* your code goes there */
	while (n < 26)
	{
		putchar(ch);
		ch++;
		n++;
	}
	putchar('\n');
	return (0);
}
