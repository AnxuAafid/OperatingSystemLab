#include<unistd.h>
#include<pthread.h>
#include<stdio.h>


void *abc();
void *chaman(){
printf("Thread has been created\n");
}
int main()
{
pthread_t var, num;
pthread_create(&var, NULL, chaman, NULL);
pthread_create(&num, NULL, abc, NULL);
pthread_join(var,NULL);
pthread_join(num,NULL);
printf("Main function completed\n");
}
void *abc(){
printf("I am the second thread\n");
}
