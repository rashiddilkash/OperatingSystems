#include<stdio.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{
	int fd1,count=0;
	char c,a[100];
	//int s;
	fd1 = open("xyz",O_RDONLY);
	//fd2 = open("pqr",O_RDONLY);
	//s = read(fd2,&a,100000);
	int i = lseek(fd1,-1,SEEK_END);
	lseek(fd1,i,SEEK_SET);
	read(fd1,&c,1);
	
	while(c!=' '){
		a[count] = c;
		count++;
		int t = lseek(fd1,-2,SEEK_CUR);
		lseek(fd1,t,SEEK_SET);
		read(fd1,&c,1);
	}
	
	for(i=count-1;i>=0;i--){
		printf("%c",a[i]);
	}
	printf("\n");

	return 0;
}
