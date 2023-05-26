#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - takes two parameters
 * @n: represents the number of arguments
 * @...: variable number of arguments
 * Return: Sum || 0
*/

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

int sum = 0;
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
sum += num;
}

va_end(args);

return (sum);
}
