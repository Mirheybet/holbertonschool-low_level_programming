#ifndef DOG_h
#define DOG_h
/**
 * struct dog - vstr1
 * @name: vp2
 * @age: v3
 * @owner: vp4
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
