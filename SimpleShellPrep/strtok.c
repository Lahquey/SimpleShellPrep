#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	
	char *str = malloc(24);
	strcpy(str, "Hello World how are you");
	
	for (int i =0; i != 24; ++i){
		printf("%d|", str[i]);
	}


	/*printf("%s\n\n", str);*/
	putchar(10);
	strtok(str, " ");
	strtok(NULL, " ");
	for (int i =0; i != 24; ++i){
                printf("%d|", str[i]);
	/*printf("%s\n", str);*/

	}
	/*free(str);*/
	printf("\n");
	return 0;
	

}
