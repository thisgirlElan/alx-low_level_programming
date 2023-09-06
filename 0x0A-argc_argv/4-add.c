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
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
j++;
}
}
int k = 1;
for (;k < argc; k++)
{
int num = _atoi(argv[k]);
if (num >= 0)
{
sum += num;
}
}

printf("%d\n", sum);
return (0);
}
