#include <stdio.h>
#include "main.h"
/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/
int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (1 % 15 == 0)
			printf("Fizzbuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);	
	}
	printf("\n");
	return (0);
}
