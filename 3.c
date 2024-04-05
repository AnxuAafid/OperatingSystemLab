#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
pid_t c1 , c2, c3, c4;
c1=fork();
if (c1==0){
	printf("The process id of child 1 is %d\n ", getpid());
	c3=fork();
	if(c3==0){
	printf("The process id of c3 is %d and its parent is %d\n", getpid(),getppid());
	c4=fork();
	if(c4==0){
	printf("The process id of c4 is %d and its parent is %d\n", getpid(), getppid());
}
}

}
c2=fork();
}
