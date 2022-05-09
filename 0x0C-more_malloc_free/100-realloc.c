#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: array length
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

    void *realloc;


    if (new_size == 0)
    {
        if (ptr != NULL)
            free(ptr);
        return (NULL);
    }
    else if (!ptr)
    {
        return (malloc(new_size));
    }
    else if (new_size <= old_size)
    {
        return (ptr);
    }
    else
    {
        realloc = malloc(new_size);
        if (realloc)
        {
            memcpy(realloc, ptr, old_size);
            free(ptr);
        }
        return (realloc);
    }

    return (0);
}
