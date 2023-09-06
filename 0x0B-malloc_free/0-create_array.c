#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array -  creates an array of chars, and initializes it with a specific char in C
* @size: unsigned int
* @c: char
* Return: array || NULL
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
