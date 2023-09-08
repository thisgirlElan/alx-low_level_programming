#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: null || pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;

if (n < len2)
result = malloc((len1 + n + 1) * sizeof(char));
else
result = malloc((len1 + len2 + 1) * sizeof(char));

if (!result)
return (NULL);

while (i < len1)
{
result[i] = s1[i];
i++;
}

while (n < len2 && i < (len1 + n))
result[i++] = s2[j++];

while (n >= len2 && i < (len1 + len2))
result[i++] = s2[j++];

result[i] = '\0';

return (result);
}
