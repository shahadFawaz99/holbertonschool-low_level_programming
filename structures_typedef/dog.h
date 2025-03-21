#ifndef DOG_H
#define DOG_H
/**
* struct dog - Structure representing a dog
* @name: Pointer to the dog's name (string)
* @age: Dog's age (floating point number)
* @owner: Pointer to the owner's name (string)
*/
struct dog
{
char *name;
float age;
char *owner;
};
/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
