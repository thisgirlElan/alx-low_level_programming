#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - takes two parameters
* @format: string representing types of arguments
* @...: variable number of arguments
*/

void print_all(const char* const format, ...)
{
va_list args;
va_start(args, format);

int i = 0;
char c;
char* s;
float f;

while (format[i] != '\0')
{
if (format[i] == 'c')
{
c = (char)va_arg(args, int);
printf("%c", c);
} else if (format[i] == 'i')
{
int num = va_arg(args, int);
printf("%d", num);
} else if (format[i] == 'f')
{
f = (float)va_arg(args, double);
printf("%f", f);
} else if (format[i] == 's')
{
s = va_arg(args, char*);
if (s == NULL) {
printf("(nil)");
}
else
{
printf("%s", s);
}
}

if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
{
printf(", ");
}

i++;
}

va_end(args);

printf("\n");
}
