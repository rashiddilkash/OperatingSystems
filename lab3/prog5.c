#include<stdio.h>
#include<signal.h>

int c = 0,d=0;

void k(){
	
	printf(" %d\n",c-d);
	d=c;
}
main(){
	signal(SIGINT,k);
	for(;;){
		sleep(1);
		c++;
	}
}
