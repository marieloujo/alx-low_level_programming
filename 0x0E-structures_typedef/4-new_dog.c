#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

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
    unsigned int nameLength, ownerLength;
	dog_t *myDog = malloc(sizeof(dog_t));

	if (myDog == 0)
		return (NULL);

    nameLength = strlen(name);
    ownerLength = strlen(owner);

    myDog->name = malloc(sizeof(char) * nameLength +1);

	if (myDog->name == 0)
    {
        free(myDog);
		return (NULL);
    }

    myDog->owner = malloc(sizeof(char) * ownerLength +1);

    if (myDog->owner == 0)
    {
        free(myDog);
        free(myDog->name);
		return (NULL);
    }

	myDog->name = strcpy(myDog->name, name);
	myDog->age = age;
	myDog->owner = strcpy(myDog->owner, owner);

	return (myDog);

}
