#include <stdio.h> /*printf header*/

int main(int ac, char *av[])
{
/** Print each string in av one line at a time without using ac**/
/** Null terminated should give me an idea**/
	/*can use a for or while loop */

	int i;
	for (int i=0; av[i] !=NULL; ++i);
	i=0;
	putchar(10);



	while(av[i] != NULL){
		printf("%s\n", av[i]);
		++i;

	}


}


