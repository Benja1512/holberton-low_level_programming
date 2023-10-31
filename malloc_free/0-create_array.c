#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_awway - create an array of size with char c.
 * @size: unsigned int type
 * @c: char type
 * Return: return pointer of array created
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
