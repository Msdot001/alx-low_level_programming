#include "main.h"

/**
 * *create_array - creates an array of specific char
 * @size: siz of the arrray
 * @c: const array
 * Return: pointer of an array , or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	/* Allocate memory for the specific cher*/

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
