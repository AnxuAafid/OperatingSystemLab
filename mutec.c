#include<unistd.h>
#include<pthread.h>
#include<stdio.h>
int c;
pthread_mutex_t max; //initialize mutex variable
void *func(){
pthread_mutex_lock(&max);// settig lock on mutex
c+=1;
printf("Thread %d is running\n",c);
for(int i=0; i<43766383; i++){

}
printf("Thread %d has completed\n",c);
pthread_mutex_unlock(&max);// unlocking the mutex
}

int main(){
pthread_mutex_init(&max,NULL);
pthread_t var ,varn;
pthread_create(&var,NULL , func, NULL);
pthread_create(&varn,NULL, func, NULL);

pthread_join(var,NULL);
pthread_join(varn,NULL);
pthread_mutex_destroy(&max);
}
