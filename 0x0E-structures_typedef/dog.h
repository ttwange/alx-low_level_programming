#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines a dog by name, age, owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: name age and owner used to describe dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
