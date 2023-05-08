#include "main.h"
#include <stdio.h>

/**
* _strpbrk - searches a string for any of a set of bytes
*
* @s: string
* @accept: string
*
* Return: returns *s || NULL
*/

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*a == *s)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
