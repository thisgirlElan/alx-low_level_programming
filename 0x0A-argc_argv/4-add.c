#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - adds positive numbers
* @argc: int
* @argv: char
* Return: 0 if no number is passed , if value isn't int
*/

int main(int argc, char *argv[])
{
int sum = 0;
for (int i = 1; i < argc; i++)
{
int j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
