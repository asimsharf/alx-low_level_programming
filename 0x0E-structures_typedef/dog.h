#ifndef DOG
#define DOG
/**
 * struct dog - define a new structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Strcture with info about a dog
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

#endif
