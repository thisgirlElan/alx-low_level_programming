#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns duplicate to new space in memory,
* which contains a copy of the string given as a parameter.
* @s1: char
* @s2: char
* Return: s1 + s2 || NULL
*/

char *_strdup(char *str)
{
char *duplicate;
int length, j;

if (str == NULL)
return (NULL);

length = 0;
while (str[i] != '\0')
length++;

duplicate = malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

for (j = 0; str[j]; j++)
duplicate[j] = str[j];

return (duplicate);
}
