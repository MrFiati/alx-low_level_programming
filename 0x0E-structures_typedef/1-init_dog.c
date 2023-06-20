#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: string variable for dog's name
 * @age: float variable for the dog's age
 * @owner: string variable for the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
