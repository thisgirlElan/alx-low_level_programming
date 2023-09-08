#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - creates an array of integers
* @min: int
* @max: int
* Return: pointer to the memory || NULL
*/

int *array_range(int min, int max)
{
if (min > max)
return (NULL);

int *arr = malloc((max - min + 1) * sizeof(int));

if (arr == NULL)
return (NULL);

for (int i = 0; min <= max; i++, min++)
arr[i] = min;

return (arr);
}
