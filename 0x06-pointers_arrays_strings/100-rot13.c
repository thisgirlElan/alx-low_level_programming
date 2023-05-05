#include "main.h"
#include <stdio.h>

/**
* char *rot13 -encodes a string using rot13
* @s: character
* Return: s
*/

char *rot13(char *s)
{
char *p = s;
while (*p)
{
if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
*p += 13;
else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
*p -= 13;
p++;
}
return (s);
}
