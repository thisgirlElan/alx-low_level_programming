#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Return: 0 on success, or the corresponding error code
*/
int main(int argc, char *argv[])
{
int num1, num2;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (op_func == NULL || argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

printf("%d\n", op_func(num1, num2));

return (0);
}
