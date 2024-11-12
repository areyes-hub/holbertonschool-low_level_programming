#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Creates a dog structure
 * @name: name of the dog
 * @age: dogs age
 * @owner: dogs mom or dad
 * Description: This struct stores about our friend
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
