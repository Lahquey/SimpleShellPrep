#include <stdio.h>
#include <string.h>

size_t tokenize(char *str, char *delim){
	size_t words_count = 0;

	if (strtok(str, delim)) ++words_count;
	while (strtok(NULL,delim)) ++words_count;

	return words_count;
}
