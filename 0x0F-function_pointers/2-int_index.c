#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - Executes function
* @array: array
* @size: size of the array
* @cmp: pointer to function
*
* Return: 0 on success
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
