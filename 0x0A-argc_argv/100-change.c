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
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

int coins = 0;
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents -= 25;
continue;
}
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue
}
coins--;
}

printf("%d\n", coins);

return (0);
}
