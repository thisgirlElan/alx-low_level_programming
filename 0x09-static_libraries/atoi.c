#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: pointer to the string to be converted
*
* Return: the integer value of the string
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
}
else
{
break;
}

s++;
}

return (result * sign);
}
