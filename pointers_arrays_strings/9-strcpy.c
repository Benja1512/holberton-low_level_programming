#include "main.h"

/**
 * _strcpy - Copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

