#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - Executes function
* @array: array
* @size: size of the array
* @action: pointer to function
*
* Return: 0 on success
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

for (size_t i = 0; i < size; i++)
action(array[i]);
}
