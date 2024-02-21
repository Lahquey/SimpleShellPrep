#include <stdio.h>

/**
 * main - prints the address and size of an array
 *
 * Return: Always 0.
 */
int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);
	printf("sizeof(b): %lu\n",sizeof(b));
	printf("size &b : %lu\n", sizeof(&b));

	return (0);
}

