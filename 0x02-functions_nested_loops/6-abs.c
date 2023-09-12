#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *@n: the int to check
 *Returns: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return (n);

}
