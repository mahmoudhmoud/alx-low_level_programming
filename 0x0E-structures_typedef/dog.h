#ifndef DOG_H
#define DOG_H


/**
 * struct Dog - a dog strucct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Description: Just a  lone dog struct in a big kitty world
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
