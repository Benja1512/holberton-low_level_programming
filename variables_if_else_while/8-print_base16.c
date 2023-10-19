#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print numbers base of 16 in lowercase
 * Description: print all the number of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int n;
	char letter;

	for (n = 0; n <= 16; n++)
	{
		putchar((n % 10) + '0');
	}
	for (letter = 'a'; letter <= 'o'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
