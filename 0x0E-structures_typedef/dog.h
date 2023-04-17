#ifndef MY_DOG_H
#define MY_DOG_H
/**
 * struct dog - Properties of a dog
 * @name: The name of the dog
 * @owner: who it belongs to
 * @age: how old it is
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
