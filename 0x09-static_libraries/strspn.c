#include "main.h"

/**
* _strspn - get length of a prefix substring
* @s: pointer to string
* @accept: pointer to substring
*
* Return: number of bytes in the initial segment of s that consist only
* of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
char *p;

while (*s != '\0')
{
p = accept;
while (*p != '\0')
{
if (*p == *s)
{
n++;
break;
}
p++;
}
if (*p == '\0')
    break;
s++;
}

return (n);
}
