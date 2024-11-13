#ifndef DOG_H
#define DOG_H
/**
 * struct dog - represents a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of owner
 *
 * Description: This is a structure that represents a dog
 */
struct dog
{
float age;
char *name;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
