#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: Dog with name, age, owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog *d;
typedef struct dog dog_t;
void init_dog(char *name, float age, char *owner);
void print_dog; 
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
