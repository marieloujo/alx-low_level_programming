#include "dog.h"
#include <stdio.h>

/**
 * print_dog - check the code
 *
 * @d: pointer throughout dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{

	if (d)
	{

		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name != NULL ? d->name : "(nil)",
				d->age,
				d->owner != NULL ? d->owner : "(nil)");

	}

}
