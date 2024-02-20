#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	return (0);
}

char *_strdup(char *str)
{
	char *ptStr;

	/*get length of string */
	int cnt =0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	/*determine size and allocate enough memory for it*/
	ptStr = malloc(cnt*sizeof(char)+1);

	/*copy string to new location*/

	int count;
	for (count=0; str[count] != '\0';count++)
	{
		ptStr[count] = str[count];
	}
	ptStr[count] = '0';

	return ptStr;
}
