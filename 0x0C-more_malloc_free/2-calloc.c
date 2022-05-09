#include <stdlib.h>
#include <string.h>

/**
* _calloc - Function that allocates memory for an array, using malloc
*
*@nmemb: lenght of array
*@size: size of byte
*
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(nmemb * size);

	if (calloc == 0)
		return (NULL);

	memset(calloc, 0, nmemb * size);


	return (calloc);

}
