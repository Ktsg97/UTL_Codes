#include<stdio.h>
#include<unistd.h>

int gvar = 555;
int main()
{
 int lvar = 54;
 int cpid = fork();
 if (cpid == 0)
 {
	printf("Child with PID:%d ,gvar:%d ,lvar:%d \n",(long)getpid(),gvar,lvar);
 }
 else
 {
	printf("Parent with PID:%d ,gavr:%d ,lvar:%d \n",(long)getpid(),gvar,lvar);
 }
 return 0;
}
