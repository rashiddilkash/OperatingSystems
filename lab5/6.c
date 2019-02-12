#include<stdio.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{
	int fd1,fd2;
	char c,a[20];
	int s;
	fd1 = open("xyz",O_RDWR);
	fd2 = open("pqr",O_RDONLY);
	s = read(fd2,&a,100000);
	int i = lseek(fd1,0,SEEK_END);
	lseek(fd1,i,SEEK_SET);
	write(fd1,a,s);

	return 0;
}