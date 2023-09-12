#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
*_strlen - returns length of 
*a string 
*@str: string to be counted 
*Return: returns length of string 
*/

int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}

/**
*_strcopy - copy string pointed by src
*into dest variable 
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/

char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];
 
dest[index] = '\0';
return (dest);
}

/**
* dog_t - creates a new dog
* @name: name
* @age: age
* @owner: owner
*
* Return: pointer to new dog, NULL otherwise.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
{
return (NULL);
}

dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}

newDog->name = malloc(_strlen(name) + 1);
newDog->owner = malloc(_strlen(owner) + 1);

if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}

_strcpy(newDog->name, name);
_strcpy(newDog->owner, owner);
newDog->age = age;

return (newDog);
}
