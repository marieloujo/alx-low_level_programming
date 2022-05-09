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

		d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");

		d->age ? printf("Age: %.1f\n", d->age) : printf("Age: (nil)\n");

		d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");

	}

}
