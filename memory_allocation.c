#include "main.h"

/**
 * _realloc - function that reallocates a pointer to double the space
 * @ptr: the pointer to the old array
 * @size: the pointer to number of elements in the old array
 *
 * Return: the pointer to the new array
 */

char **_realloc(char **ptr, size_t *size)
{
	char **new;
	size_t j;

	new = malloc(sizeof(char *) * ((*size) + 10));
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; j < (*size); j++)
	{
		new[j] = ptr[j];
	}
	*size += 10;
	free(ptr);
	return (new);
}


