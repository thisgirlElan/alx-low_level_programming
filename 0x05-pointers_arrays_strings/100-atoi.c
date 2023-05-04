#include "main.h"
#include <ctype.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int result = 0, sign = 1, i = 0;

while (isspace(s[i]))
i++;

if (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign = -1;
i++;
}

while (isdigit(s[i]))
{
result = result * 10 + (s[i] - '0');
i++;
}

return (sign * result);
}
