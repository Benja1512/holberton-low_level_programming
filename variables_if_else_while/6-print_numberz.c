#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - all singlres numbers of base 10 from 0
 * Description: print all the single numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		putchar((a % 10) + '0');
	}

	putchar('\n');
	return (0);
}
