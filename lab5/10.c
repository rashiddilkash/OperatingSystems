#include<stdio.h>
#include<fcntl.h>

int main(int argc, char const *argv[])
{
	printf("Give String:");
	char c;
	scanf("%c",&c);

	int fd1;
	
	fd1 = open("xyz",O_WRONLY);
	
	int i = lseek(fd1,0,SEEK_END);
	lseek(fd1,i,SEEK_SET);
	while(c!='\n'){
		write(fd1,&c,1);
		scanf("%c",&c);
	}
	return 0;
}