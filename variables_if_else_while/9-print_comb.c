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
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);



}
