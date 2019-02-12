#include<stdio.h>
#include<fcntl.h>
main(){
	int fd,i,j = 0;
	char c;
	fd = open("xyz",O_RDONLY);
	i = read(fd,&c,1);
	while(i!=0){
		printf("%c",c);
		j++;
		i = read(fd,&c,1);
	}
	//printf("%d\n",j);
}  
