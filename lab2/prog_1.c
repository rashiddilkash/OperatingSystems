#include<stdio.h>
main(){
	fork();
	fork();
	printf("X, %d\n",getpid());
	fork();
	printf("Y, %d\n",getpid());
	fork();
	fork();
	fork();
	printf("Z, %d\n",getpid());
}
