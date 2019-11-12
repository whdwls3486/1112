#include <stdilb.h>
#include <stdio.h>

int main()
{
	int pid1, pid2;
	pid1 = fork();
	if (pid1 == 0) {
		printf("[Child] : Hello, world pid=%d\n", getpid());
		exit(0);
	}
	pid2 = fork();
	if (pid2 == 0) {
		printf("[Child 2] : Hello, world ! pid = %d\n", getpid());
		exit(0);
	}
}

