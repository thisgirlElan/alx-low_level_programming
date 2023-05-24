#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array containing the command-line arguments
*
* Return: 0 on success, 98 for wrong number of arguments,
* 99 for unknown operator, 100 for division/modulo by 0.
*/

int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if (argv[2][0] == '/' || argv[2][0] == '%')
{
if (num2 == 0)
{
printf("Error\n");
return (100);
}
}

func = get_op_func(argv[2]);
if (func == NULL)
{
printf("Error\n");
return (99);
}

result = func(num1, num2);
printf("%d\n", result);

return (0);
}
