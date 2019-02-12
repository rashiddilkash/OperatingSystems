#include<stdio.h>
#include<fcntl.h>
main(){
	int fd,i;
	char c;
	fd = open("xyz",O_RDONLY);
	i = lseek(fd,0,SEEK_SET);
	read(fd,&c,1);
	while(c!='a')
		read(fd,&c,1);
	int j;
	j = lseek(fd,0,SEEK_CUR);
	printf("%d\n",j);
}  
