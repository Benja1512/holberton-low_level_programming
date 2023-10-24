#include "main.h"
/**
 * print_square - prints squares
 * @size: parameter
 * Return: return nothing
 */

void print_square(int size)
{
	int i;
	int j;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
