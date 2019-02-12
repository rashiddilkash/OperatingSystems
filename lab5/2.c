#include<stdio.h>
#include<fcntl.h>
main(){
	int fd,i,j = 0;
	char c;
	fd = open("xyz",O_RDONLY);
	i = read(fd,&c,1);
	while(i!=0){
		j++;
		//i = lseek(fd,0,SEEK_CUR);
		i = read(fd,&c,1);
		//j++;
	}
	printf("%d\n",j);
}  
