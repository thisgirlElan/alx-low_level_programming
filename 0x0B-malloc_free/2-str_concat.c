#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two strings
* @s1: char
* @s2: char
* Return: s1 + s2 || NULL
*/

char *str_concat(char *s1, char *s2)
{
char *concatenated;
int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;


concatenated = malloc((i + j + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL);

i = j = 0;
while (s1[i] != '\0')
{
concatenated[i] = s1[i]
i++;
}
while (s2[j] != '\0')
{
concatenated[i] = s2[j]
i++, j++;
}

concatenated[i] = '\0';

return (concatenated);
}
