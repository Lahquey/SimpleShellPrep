#include <stdio.h>

/**
 * main - using sizeof to dynamicall determine the size of types char,int and float
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;;
	
	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my pc : %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my pc: %lu bytes\n", sizeof(float));
	printf("Size of my variable on my pc: %lu bytes\n",sizeof (n));
	return 0;
}
