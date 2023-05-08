#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers.
*
* @a: pointer
* @size: size of matrix
*
* Return: 0
*/

void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
for (int i = 0; i < size; i++)
{
sum1 += a[i*size + i];
sum2 += a[(i+1)*size - 1 - i];
}
printf("Sum of diagonal 1: %d\n", sum1);
printf("Sum of diagonal 2: %d\n", sum2);
}
