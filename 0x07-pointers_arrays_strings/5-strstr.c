#include "main.h"
#include <stdio.h>

/**
* _strpbrk -  finds the first occurrence of the substring needle
* in the string haystack
*
* @haystack: string
* @needle: string
*
* Return: needle || NULL
*/

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
char *p1 = haystack;
while (*p1 != '\0')
{
char *p2 = needle;
char *p3 = p1;
while (*p2 != '\0' && *p3 != '\0' && *p2 == *p3)
{
p2++;
p3++;
}
if (*p2 == '\0')
{
return (p1);
}
p1++;
}
return (NULL);
}
