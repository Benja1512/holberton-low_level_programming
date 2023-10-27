#include <stdlib.h>
#include <stdio.h>
/**
 * print - result of the multiplication, new line
 * @argc: the amount of the argument
 * @argv: the length of the argument
 * Return: 0
 */
int main (int argc, char *argv[])
{	
	int x;  /* declarar variable  tres variables */
	int c;
	int multiplicacion;
	
	if(argc <= 2) 
	{
		printf("Error\n");
		return (1);
	}
	
	x = atoi(argv[1]); 
        c = atoi(argv[2]);
	multiplicacion = x * c;

	printf("multiplicacion: %d\n", multiplicacion);
		return (0);
	
}
