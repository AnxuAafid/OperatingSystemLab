#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main(){
printf("The process id of main function is %d\n ", getpid());
int num;
pid_t id;
id=fork();
if(id==0){
printf("The child process is created successfully\n");
printf("The process id of child is %d and id of parent is %d\n", getpid(), getppid());
}
else{

printf("Parent running\n");
}

}
