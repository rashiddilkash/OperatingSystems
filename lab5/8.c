#include<stdio.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{
	int fd1,k;
	printf("Give k:");
	scanf("%d",&k);

	char c,d;
	fd1 = open("xyz",O_RDWR);
	int i = lseek(fd1,k-1,SEEK_SET);
	lseek(fd1,i,SEEK_SET);
	read(fd1,&c,1);
	
	int j = lseek(fd1,-1*k,SEEK_END);
	lseek(fd1,j,SEEK_SET);
	read(fd1,&d,1);
	//printf("%C %c",c,d);
	i = lseek(fd1,k-1,SEEK_SET);
	lseek(fd1,i,SEEK_SET);
	write(fd1,&d,1);
	
	j = lseek(fd1,-1*k,SEEK_END);
	lseek(fd1,j,SEEK_SET);
	write(fd1,&c,1);

	return 0;
}
