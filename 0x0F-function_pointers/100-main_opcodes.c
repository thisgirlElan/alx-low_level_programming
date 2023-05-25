#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array containing the command-line arguments
*
* Return: 0 on success, 1 for incorrect number of arguments,
* 2 for negative number of bytes
*/

int main(int argc, char *argv[])
{
int num_bytes, i;
unsigned char *ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

ptr = (unsigned char *)main;

for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *(ptr + i));
}
printf("\n");

return (0);
}
