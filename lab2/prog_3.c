#include<stdio.h>
main(){
	fork();
	fork();
	int p =  getpid();
	fork();
	fork();
	fork();
	if(p==getpid())
		sleep(4);
	fork();
	if(p==getpid())
		sleep(2);
	if(p==getppid())
		printf("Y");
	sleep(1);
}	
