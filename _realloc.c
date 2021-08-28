#include "shell.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: data
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	src = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
	{
		new_ptr[i] = src[i];
	}
	free(ptr);

	return (new_ptr);
}