#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
    int len = 0;
    int start;

    while (str[len] != '\0')
    {
        len++;
    }

    /* Calculate the starting position based on whether the length is even or odd */
    if (len % 2 == 0) {
        /* Even length: Start from the middle index*/
        start = len / 2;
    } else {
        /* Odd length: Start from the last n characters (n = (length - 1) / 2) */
        start = (len - 1) / 2;
    }

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}


