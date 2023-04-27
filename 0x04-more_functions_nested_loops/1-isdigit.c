#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for digits 0 through 9
* @c: value checked
*
* Return: 1 if c == digit else, 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}

}
