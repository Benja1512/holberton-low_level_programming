#include <stdio.h>
/**
 * print - show the number of the arguments
 * @argc: print the number of arguments
 * @argv: array the arguments (lentgh)
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

