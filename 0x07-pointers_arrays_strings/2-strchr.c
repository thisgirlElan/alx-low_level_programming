#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* _strchr - locates a character in a string
*
* @s: The pointer to astring
* @c: The character to look for
*
* Return: A pointer || NULL
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}

return (NULL);
}
