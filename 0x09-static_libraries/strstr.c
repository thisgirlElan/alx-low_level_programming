#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* _strstr - locate a substring in a string
* @haystack: pointer to string
* @needle: pointer to substring
*
* Return: pointer to the beginning of the substring, or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
int n = 0, m = 0;

while (needle[n] != '\0')
n++;

while (*haystack != '\0')
{
if (*haystack == needle[0])
{
m = 1;
while (m < n && *(haystack + m) == *(needle + m))
m++;
if (m == n)
return (haystack);
}
haystack++;
}

return (NULL);
}
