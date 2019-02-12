#include<stdio.h>
#include<signal.h>

int c = 0;

void k(){
	c++;
	int i;
	for(i=0;i<c;i++){
		printf("%c",'X');
	}
	printf("\n");
}
main(){
	signal(SIGINT,k);
	for(;;);
}
