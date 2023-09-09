#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Sucess)
*/

int main(void)
{
	int n;
	int lt_dit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lt_dit = n % 10;
	if (lt_dit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lt_dit);
	else if (lt_dit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lt_dit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lt_dit);
	return (0);
}
