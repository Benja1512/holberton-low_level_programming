#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print all combinations of single-digit numbers
 * Description: Print all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{

	int digit = 0;
		while (digit < 10)
	       	{
			putchar(digit + '0'); // Imprime el dígito como un carácter
        	if (digit < 9)
	       	{
            		putchar(','); // Imprime una coma
            		putchar(' '); // Imprime un espacio
        	}
        		digit++; // Incrementa el dígito en 1
    		}
		putchar('\n'); // Imprime un salto de línea al final
		return 0;
}
