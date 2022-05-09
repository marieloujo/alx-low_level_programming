#include <stdlib.h>
#include <string.h>

/**
* _realloc - creates an array of integers
*
* @ptr: old pointer
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: is the new size, in bytes of the new memory block
*
* Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *realloc;

	if (old_size >= new_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
			ptr = NULL;
		}
		return (NULL);
	}

	realloc = malloc(new_size);

	if (realloc == 0)
		return (NULL);

	memcpy(realloc, ptr, old_size);
	free(ptr);

	return (realloc);

}
