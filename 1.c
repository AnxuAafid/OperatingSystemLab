`#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main(){
fork();
fork();
printf("Hello Guys\n");
fork();
printf("Me Being Me\n");
// To get id of a process

printf("The process id of this program is %d\n ", getpid());
}
