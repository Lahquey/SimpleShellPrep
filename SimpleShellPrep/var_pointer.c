#include <stdio.h>

/**
 * main - printing the thesize in bytes of a pointer
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n;
	int *p;
	n = 98;
	p = &n;

	printf("Size of pointer: %lu\n", sizeof(p));
	printf("The address where the pointer is stred is: %p\n", &p);

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	/*Dereferencing */
	/**
	 * The real power of pointers is that they can manipulate values stored at the memory address they point to.
	 *  This is called dereferencing
	 * . To do this, you can use the dereference operator */

	*p = 402;
	printf("Value of 'n': %d\n", n);
	return 0;
}
