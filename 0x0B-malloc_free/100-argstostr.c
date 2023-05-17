#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* argstostr -   concatenates all the arguments of your program.
* @ac: int
* @av: char
* Return:  a pointer to a new string, or NULL if it fails
*/

char* argstostr(int ac, char** av)
{
if (ac == 0 || av == NULL)
return (NULL);

size_t total_length = 0;
for (int i = 0; i < ac; i++)
total_length += strlen(av[i]) + 1;

char* concatenated = (char*)malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);

int position = 0;
for (int i = 0; i < ac; i++) {
strcpy(concatenated + position, av[i]);
position += strlen(av[i]);
concatenated[position++] = '\n';
}

concatenated[total_length] = '\0';

return (concatenated);
}
