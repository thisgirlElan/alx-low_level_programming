#include <stdio.h>
#include "function_pointers.h"

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
if (size <= 0)
return (-1);

for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}

int compare_even(int num)
{
return (num % 2 == 0) ? 1 : 0;
}
