#include<stdio.h>
#include<pthread.h>
int c;
pthread_mutex_t lock;
void *fun(){



pthread_mutex_lock(&lock);
c+=1;
printf("Job %d started\n",c);
for(int i; i<3456772; i++){
}
printf("Job fimished by %d ",c);
pthread_mutex_unlock(&lock);
}

int main(){
pthread_mutex_init(&lock,NULL);
pthread_t a,b;
pthread_create(&a,NULL,fun,NULL);
pthread_create(&b, NULL, fun, NULL);

pthread_join(a,NULL);
pthread_join(b,NULL);
pthread_mutex_destroy(&lock);
}
