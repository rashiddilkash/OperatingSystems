#include<stdio.h>
#include<signal.h>

int c = 0;
void k(){
	c++;
	if(c%2==0){
		printf(" PP\n");
	}
	else {
		printf(" QQ\n");
	}
}
main(){
	signal(SIGINT,k);
	for(;;);
}
