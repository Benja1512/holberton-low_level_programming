#include "main.h"
/**
 * swap_int -Swaps the values of two interger.
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int cambiar = *a;
	*a = *b;    // a = 98 ; b = 42
	*b = cambiar;
}
