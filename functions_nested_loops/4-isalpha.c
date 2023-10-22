#include "main.h"
/**
 * _isalpha - checks when a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if character is letter, lowercase or uppercase, or otherwise.
 */

int _isalpha(int c)
{	/*Tabla Ascii  MAYUSCULAS ||  MINUSCULAS */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
