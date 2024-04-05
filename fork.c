#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>






int main(){
printf("The id of this process is %d\n ", getpid());
fork();
fork();
fork();
printf("Hello Babu bhaya\n");
}
