#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print lowercase alphabet in reverse
 * Description: print lowercase alphabeth in reverse
 * Return: 0
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);

}

