#include "main.h"
#include <stdio.h>

/**
* _strchr - looks for the first byte not belonging to @accept.
*
* @accept: string
* @s: string
*
* Return: number of bytes so far
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
return (i);
}
return (i);
}
