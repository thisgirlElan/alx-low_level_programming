#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory of an array using malloc
* @nmemb: unsigned int
* @size: unsigned int
* Return: pointer to the memory || NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
return (NULL);

void *ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

memset(ptr, 0, nmemb * size);

return (ptr);
}
