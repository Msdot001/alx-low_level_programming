#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is the char to be checked
 * Return: 1 if char is alphabetic , otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
