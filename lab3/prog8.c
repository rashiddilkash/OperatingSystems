#include<stdio.h>
#include<signal.h>

int t,sum=0;

void u(){
	scanf("%d",&t);
	if(t<5){
		printf("%d\n",sum);
		kill(getpid(),SIGINT);
	}
	else{
		printf("%d\n",2*t);
		sum+=t;
	}
}

main(){
	signal(SIGFPE,u);
	int a,b;
	scanf("%d",&b);
	a=3/b;
}
