#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
extern char **environ;

int main()
{

 printf("Env variable passed are: \n");
 for(int i=0;environ[i] !=NULL;i++)
 {
	printf("environ[%d]:%s\n",i,environ[i]);
  	sleep(1000);
 }
 return 0;

}

