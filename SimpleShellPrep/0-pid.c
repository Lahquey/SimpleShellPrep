#include <stdio.h>
#include <unistd.h>

int main (void)
{
	pid_t pid; /*created a variable pid_d which should call itself*/
	pid = getppid();

	/*printf("%ld\n", sizeof(pid));*/
	printf("%d\n", pid);
	while(1); /*infinite while loop*/

	return 0;

}


