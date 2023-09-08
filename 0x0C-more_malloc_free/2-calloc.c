#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* memset - fils memory with byte
* @s: mem to be filled
* @b: char to copy
* @n: number of times to copy b
* Return: pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

/**
* _calloc - allocates memory of an array using malloc
* @nmemb: unsigned int
* @size: unsigned int
* Return: pointer to the memory || NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr
if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, (nmemb * size));

return (ptr);
}
