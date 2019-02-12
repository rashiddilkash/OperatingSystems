#include<stdio.h>
#include<signal.h>

void k(){
	printf("Y\n");
	kill(getpid(),SIGQUIT);
}

main(){
	signal(SIGINT,k);
	for(;;)
		printf("Z");
}
