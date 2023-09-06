#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenates all the arguments of your program.
* @ac: int
* @av: char
* Return:  a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
char *concatenated;
int i, j, sum = 0, position = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
position++;
}
position += ac;

concatenated = malloc((position + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concatenated[sum] = av[i][j];
sum++;
}
if (concatenated[sum] == '\0')
{
concatenated[sum++] = '\n';
}
}

return (concatenated);
}
