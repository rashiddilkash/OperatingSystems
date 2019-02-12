#include<stdio.h>
#include<fcntl.h>
main(){
	int fd1,fd2,i;
	char c;
	fd1 = open("xyz",O_RDONLY);
	fd2 = open("pqr",O_CREAT|O_WRONLY,0666);
	
	i = read(fd1,&c,1);
	while(i!=0){
		write(fd2,&c,1);
		i = read(fd1,&c,1);
	}
}  
