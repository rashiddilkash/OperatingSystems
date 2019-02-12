main()
{
printf("give process id : ");
int a,c;
scanf("%d",&a);
do{
printf("Give choice:);
scanf("%d",&c);
if(c==0)kill(a,SIGINT);
if(c==1)kill(a,SIGQUIT);
if(c==2)kill(a,SIGUSR1);
if(c==3)kill(a,SIGSTOP);
}while(c!=3);
}
