#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_strings(const char* separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
char* str = va_arg(args, char*);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
