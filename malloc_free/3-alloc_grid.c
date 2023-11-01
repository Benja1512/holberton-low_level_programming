#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimensional array of integers
 * @width - the witdh of the array
 * @height - the height of the array
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j  = 0; 0 < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	
	}
	else
		return (NULL);
}
