#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
pid_t num;
printf("The id of main is %d\n", getpid());
num=fork();
if(num==0){
printf("The id of child 1 is %d \n", getpid());
pid_t num2;
num2=fork();
if(num2==0)
{
printf("THe id of child 2 is %d and parent is %d", getpid(),getppid());
}

}
}
