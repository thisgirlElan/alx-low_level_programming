#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer
*
* Return: -1 if it doesn't have a natural square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
int lower_sqrt = _sqrt_recursion(n / 4);
int upper_sqrt = lower_sqrt + 1;
if (upper_sqrt * upper_sqrt > n)
{
return (lower_sqrt);
}
else
{
return (upper_sqrt);
}
}
}
