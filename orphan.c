#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
pid_t var;
var=fork();
if(var==0){
printf("Child process running\n");
sleep(10);
printf("The child process got completed \n");
}
else{
printf("Parent process terminated\n");
}
}
