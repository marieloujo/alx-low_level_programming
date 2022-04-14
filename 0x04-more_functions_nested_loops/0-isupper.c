#include "main.h"
#include <ctype.h>

/**
* Function that checks for uppercase character
* @c: variable that contain the cheked character
*
* Returns 1 if c is uppercase
* Returns 0 otherwise
*/
int _isupper(int c)
{

	if (isupper(c))
		return (1);

	else
		return (0);

}
