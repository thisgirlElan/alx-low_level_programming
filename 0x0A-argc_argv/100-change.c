#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - calculates the minimum number of coins
* to make change for an amount of money
* @argc: int
* @argv: char
* Return: 1 if error else 0
*/

int main(int argc, char *argv[])
{
int num, x, coins;
int cents[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
coins = 0;

if (cents < 0)
{
printf("0\n");
return (0);
}

for (x = 0; x < 5 && num >= 0; x++)
{
while (num >= cents[x])
{
coins++;
num -= cents[x]
}
}

printf("%d\n", coins);

return (0);
}
