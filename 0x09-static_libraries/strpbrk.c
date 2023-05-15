#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
char *p;

while (*s != '\0')
{
p = accept;
while (*p != '\0')
{
if (*p == *s)
return (s);
p++;
}
s++;
}

return (NULL);
}
