#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - takes three parameters
* @separator: string printed between numbers
* @n: number of integers passed to the function
* @...: variable number of integers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
unsigned int i;

for (i = 0; i < n; i++)
{
int num = va_arg(args, int);

printf("%d", num);

if (separator && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");
va_end(args);
}
