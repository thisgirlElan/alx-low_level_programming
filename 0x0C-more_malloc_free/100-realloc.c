#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc -  reallocates a memory block using malloc and free
* @ptr: void
* @old_size: unsigned int
* @new_size: unsigned int
* Return: pointer to the memory || NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (!ptr)
return (malloc(new_size));

new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);

old_ptr = ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
new_ptr[i] = old_ptr[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new_ptr[i] = old_ptr[i];
}

free(ptr);

return (new_ptr);
}
