#include "main.h"

/**
* _strcmp - Compares two strings.
* @s1: The first string to be compared.
* @s2: The second string to be compared.
*
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
        int index = 0;

        while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index]) {
                index++;
        }

        if (s1[index] == s2[index]) {
                return (0);
        } else {
                return (s1[index] - s2[index]);
        }
}
