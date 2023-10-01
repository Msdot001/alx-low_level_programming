#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - returns 1 for  palindrome and 0 if not.
 * @s: pointer 
 * Return: 1 or 0
 */

int is_palindrome(char *s) {
    int length = 0;
    int start = 0;
    int end;

    if (s == NULL) {
        /* Handle NULL input, you can choose to return 0 or handle it differently*/
        return (0);
    }

    while (s[length] != '\0') {
        length++; /* Calculate the length of the string*/
    }

    end = length - 1;

    if (length <= 1) {
        /* An empty string or a single character string is considered a palindrome*/
        return (1);
    }

    while (start < end) {
        if (s[start] != s[end]) {
            return (0); /*If characters don't match, it's not a palindrome*/
        }
        start++;
        end--;
    }

    return (1); /* If the loop completes without returning, it's a palindrome*/
}
