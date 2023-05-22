#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

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

newDog->name = malloc(strlen(name) + 1);
newDog->owner = malloc(strlen(owner) + 1);

if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}

strcpy(newDog->name, name);
strcpy(newDog->owner, owner);
newDog->age = age;

return (newDog);
}
