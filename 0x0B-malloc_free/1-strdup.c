#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @s1: char
* @s2: char
* Return: s1 + s2 || NULL
*/

char* _strdup(char* str)
{
if (str == NULL)
return (NULL);

size_t length = strlen(str);
char* duplicate = (char*)malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

strcpy(duplicate, str);
return (duplicate);
}
