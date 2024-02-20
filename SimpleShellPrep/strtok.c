#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	
	char *str = malloc(24);
	char *ptr;
	strcpy(str, " Hello World how are you");
	
	for (int i =0; i != 24; ++i){
		printf("%d|", str[i]);
	}


	/*printf("%s\n\n", str);*/
	putchar(10);
	ptr=strtok(str, " ");
	/*strtok(NULL, " ");
	strtok(NULL, " ");*/

	while ((ptr=strtok(NULL, " "))!= NULL){
		printf("%c\n", *ptr);
	}
	for (int i =0; i != 24; ++i){
                printf("%d|", str[i]);
	/*printf("%s\n", str);*/

	}
	/*free(str);*/
	printf("\n");
	return 0;
	

}
