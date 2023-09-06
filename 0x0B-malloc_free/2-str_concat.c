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
char *concatenated
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size_t s1_length = strlen(s1);
size_t s2_length = strlen(s2);

concatenated = malloc((s1_length + s2_length + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL);

strcpy(concatenated, s1);
strcat(concatenated, s2);

return (concatenated);
}
