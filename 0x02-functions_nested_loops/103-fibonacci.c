#include "main.h"
#include <stdio.h>

/**
* main - prints sum of even numbers in the fibonacci sequence less than 4m
*followed by a new line
*
* Return: 0
*/
int main(void)
{
unsigned long a = 0, b = 1, sum;

float sum_even;

while (1)
{
sum = a + b;
if (sum > 4000000)
{
break;
}
if ((sum % 2) == 0)
{
sum_even += sum;
}
a = b;
b = sum;
}

printf("%.0f\n", sum_even);
return (0);
}