#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - Prints name
* @name: name
* @f: pointer to function
*
* Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;

f(name);
}
