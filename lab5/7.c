#include<stdio.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{
	int fd1,fd2;
	char c,a[20];
	int s;
	fd1 = open("xyz",O_RDONLY);
	s = read(fd1,a,100000);
	int i = lseek(fd1,-1,SEEK_END);
	lseek(fd1,i,SEEK_SET);
	read(fd1,&c,1);
	int t ;
	for(t=0;t<s;t++){
		printf("%c\n", c);
		int j = lseek(fd1,-2,SEEK_CUR);
		
		lseek(fd1,j,SEEK_SET);
		read(fd1,&c,1);
	}
	//write(fd1,a,s);

	return 0;
}
