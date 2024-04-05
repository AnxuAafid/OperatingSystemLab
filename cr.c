#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main(){
pid_t c1,c2,c3,c4;
c1=fork();
if(c1==0){
printf("The id of c1 is %d and its parent is %d\n", getpid(),getppid());
c3=fork();
if(c3==0)
{
printf("The id of C3 is %d and its parent is %d\n", getpid(),getppid());

c4=fork();
if(c4==0)
{
printf("The id of C4 is %d and its parent's id is %d \n", getpid(), getppid());
}
}
}
}
