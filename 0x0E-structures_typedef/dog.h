#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create the structure of a dog
 * @name: First element or member
 * @age: Second member
 * @owner: third member
 * Description: main members of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif/*ROBERT*/
