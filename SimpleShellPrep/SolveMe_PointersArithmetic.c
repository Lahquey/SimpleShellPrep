#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   p = a + 1;
   printf("pointer to adress of a[0]: %p\n", a);
   printf("pointer to adress of a[1]: %p\n", a+1);
   *p = 98;  
   p2 = a + 3;
   *p2 = *p ;
   printf("pointer to adress of unknown: %d\n", *p2);
   return (0);
}
