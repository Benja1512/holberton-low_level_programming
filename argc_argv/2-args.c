#include <stdio.h>
/**
 * print - stdout one argument per line
 * @argc: the amount of argument
 * @argv: the array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	
	for(a = 0; a < argc; a++)
		
		printf("%s\n", argv[a]);

			return (0);
}
