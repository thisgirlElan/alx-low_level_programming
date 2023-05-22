#include <stdio.h>
#include "dog.h"

/**
* init_dog - initializes struct dog
* @d: struct dog pointer
* @name: name
* @age: age
* @owner: owner
* Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
