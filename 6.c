#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main(){
pid_t child;
child=fork();
if(child==0){
	printf("The child process is running\n");
	sleep(10);
	printf("The child got now completed");
}
else{
printf("The parent process terminated");

}
}
