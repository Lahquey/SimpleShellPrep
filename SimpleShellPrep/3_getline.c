#include <stdio.h>

int main(void){
	char *lineptr = NULL;
	size_t len=0;
	ssize_t nread;

	printf("$ ");
	nread = getline(&lineptr, &len, stdin);
	if (nread == -1){
		printf("Reading Error\n");
		return 1;
	}
	printf("%s",lineptr);

	return 0;

}
