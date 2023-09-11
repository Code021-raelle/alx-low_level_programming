#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Create a dog.
 * @x: name of struct.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: Always 0.
 */
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
	else
	{
		return;
	}
}

