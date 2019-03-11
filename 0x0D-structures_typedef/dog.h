#ifndef DOG
#define DOG

/**
 * struct dog - dog elements
 *
 * @name: first number
 *
 * @age: second
 *
 * @owner: third
 *
 * Description: input name for the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
