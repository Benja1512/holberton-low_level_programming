#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print all alphabeth excep q and e
 * Description: Make a Loop function that print the alphabeth an except q and e
 * Return: 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			if (c != 'e' && c != 'q')
			{
				putchar(c);
			}
		}
	}
	putchar('\n');

	return (0);
}
