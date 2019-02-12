#include<stdio.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{
	int fd1;

	char c,d,a[20];
	fd1 = open("xyz",O_RDWR);
	int s;
	
	s = read(fd1,a,100000);
	s = s/2;
	int t;
	
	for(t = 1;t<=s;t++){
		int i = lseek(fd1,t-1,SEEK_SET);
		//lseek(fd1,i,SEEK_SET);
		read(fd1,&c,1);
	
		int j = lseek(fd1,-1*t,SEEK_END);
		lseek(fd1,j,SEEK_SET);
		read(fd1,&d,1);
		//printf("%C %c",c,d);
		i = lseek(fd1,t-1,SEEK_SET);
		//lseek(fd1,i,SEEK_SET);
		write(fd1,&d,1);
	
		j = lseek(fd1,-1*t,SEEK_END);
		lseek(fd1,j,SEEK_SET);
		write(fd1,&c,1);
	}

	return 0;
}
