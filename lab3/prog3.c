#include<stdio.h>
#include<signal.h>

int t;

void k(){
	printf("Enter 0 to terminate and 1 to continue : ");
	scanf("%d",&t);
	
	if(t==0){	
		kill(getpid(),SIGQUIT);
	}	
	
}
main(){
	signal(SIGINT,k);
	for(;;);
}
