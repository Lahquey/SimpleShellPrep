#include <stdio.h>
#include<stdlib.h>


int main(void){
	return 0;
}

char *create_array(unsigned int size,char c){
	char *ptArray;
	unsigned int count ;

	/*Allocating enough space for all array members*/
	ptArray = malloc(size*sizeof(char));

	/* Put char c in each of the memory locations*/
	for (count = 0; count < size; count++){
		ptArray[count]=c;

	}
/*printf("%s\n", ptArray);*/
	/*use the array subscript notation*/
	/*ptArray[0]=c;
	ptArray[1]=cc;*/
	return (ptArray);
}
