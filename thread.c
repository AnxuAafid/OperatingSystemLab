#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *func(){
printf("THis is thread Function");
}

int main(){

pthread_t a_thread; //declaration
pthread_create(&a_thread, NULL, func, NULL);//creating thread--ist para--store id of thread,attributes the thread will have, 3rd function of thread --4th input to the function
pthread_join(a_thread, NULL);//waiting for thread to finish
printf("Main Program running");
}
