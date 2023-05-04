#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
int length = 0, i;
char temp;

while (*(s + length) != '\0')
length++;

for (i = 0; i < length / 2; i++)
{
temp = *(s + i);
*(s + i) = *(s + length - i - 1);
*(s + length - i - 1) = temp;
}
}
