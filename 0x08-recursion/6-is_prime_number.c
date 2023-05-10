#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* is_prime_number - checks for prime numbers
* @n: integer
*
* Return: 1 if prime number else, 0
*/

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
for (int i = 2; i <= sqrt(n); i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
