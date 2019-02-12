#include<stdio.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{
	int fd1;
	
	char c,d,a[20],z;
	printf("Give Char : ");
	scanf("%c",&z);
	fd1 = open("xyz",O_RDWR);
	int s;
	
	s = read(fd1,a,100000);
	int t;
	
	for(t = 1;t<=s;t++){
		int i = lseek(fd1,t-1,SEEK_SET);
		//lseek(fd1,i,SEEK_SET);
		read(fd1,&c,1);
	
		int j = lseek(fd1,-1,SEEK_CUR);
		lseek(fd1,j,SEEK_SET);
		write(fd1,&z,1);
		z = c;
		
	}

	return 0;
}
