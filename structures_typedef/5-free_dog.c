#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees dogs
* @d: Pointer to the dog to be freed
*
* Description: This function frees the memory allocated for a dog structure.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the memory allocated for the name and owner strings */
		free(d->name);
		free(d->owner);

		/* Free the memory allocated for the dog structure itself */
		free(d);
	}
}
