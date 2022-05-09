#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - check the code
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *myDog = malloc(sizeof(dog_t));

	if (myDog == 0)
		return (NULL);

	myDog->name = name;
	myDog->age = age;
	myDog->owner = owner;

	return (myDog);

}
