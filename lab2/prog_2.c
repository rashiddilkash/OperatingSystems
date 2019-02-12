#include<stdio.h>
main(){
	fork();
	fork();
	int p=getpid();
	fork();
	fork();
	fork();
	if(p==getpid())
		printf("X,%d\n",getpid());
	if(p==getppid())
		printf("Y,%d\n",getppid());
	sleep(1);
}

