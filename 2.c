#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
pid_t child;
child=fork();

if (child == 0)
	printf("The child process has created succesfully with process id %d ", getpid());
else if (child < 0)
	printf("Child process creation failed");
else 
	printf("The parent process is running");
}
