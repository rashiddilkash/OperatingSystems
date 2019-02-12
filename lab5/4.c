#include<stdio.h>
#include<fcntl.h>
/*main(){
	int fd,i,j = 0;
	char c;
	fd = open("xyz",O_RDWR);
	i = lseek(fd,3,SEEK_SET);
	write(fd,"K",1);
	//printf("%d\n",j);
}
*/
// A

main(){
	int fd,i,j;
	char c;
	fd = open("xyz",O_RDWR);
	i = read(fd,&c,1);
	while(i!=0){
		if(c=='a'){
			j = lseek(fd,-1,SEEK_CUR);
			lseek(fd,j,SEEK_SET);
			write(fd,"K",1);
			
		}
		i = read(fd,&c,1);
	}
}    
