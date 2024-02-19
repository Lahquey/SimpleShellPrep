#include <stdio.h>

int main(void){
        char *lineptr = NULL;
        size_t len=0;
	ssize_t nread;


	printf("$ ");
	while ((nread =  getline(&lineptr, &len, stdin))!= EOF){
		printf("%s", lineptr);
		printf("$ ");

	}


        return 0;

}
