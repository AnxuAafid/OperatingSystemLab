#include<stdio.h>
#include<unistd.h>
#include<pthread.h>



void *chaman(void *arg){
int *x=arg;
int sum=x[0]+x[1];
printf("Sum is %d\n", sum);
printf("We are in thread function\n");
pthread_exit("Sum calculated");
}
int num[2]={3,5};

int main(){

pthread_t a_thread;
void *result;
pthread_create(&a_thread, NULL, chaman ,(void *) num);
pthread_join(a_thread,&result);
printf("THe thread function returns: %s",(char *) result);
}
