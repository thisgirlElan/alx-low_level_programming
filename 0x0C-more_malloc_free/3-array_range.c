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
int *arr;
int i;

if (min > max)
return (NULL);

arr = malloc((max - min + 1) * sizeof(int));

if (arr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
arr[i] = min++;

return (arr);
}
