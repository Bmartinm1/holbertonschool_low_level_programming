#include <stdlib.h>

/**
 * malloc_check - allocates memory using malloc
 * @b: memory amount
 * Return : void pointer
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
