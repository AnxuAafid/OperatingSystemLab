
#include<unistd.h>
#include<pthread.h>
#include<stdio.h>
void *HZsection();
void *func(){
int num, num2;
printf("Running the thread\n");
printf("Enter the first and then sec num\n");
scanf("%d", &num);
scanf("%d", &num2);
int sum=num+num2;
printf("The sum is %d \n", sum);

}

int main(){
pthread_t thr, abc;
pthread_create(&thr, NULL, func, NULL);
pthread_join(thr,NULL);
printf("Calling the second thread");
pthread_create(&abc, NULL , HZsection, "THis is my thread");
pthread_join(abc, NULL);
printf("Completed\n");
}

void *HZsection(void *mes){
char *var = (char *) mes;
printf("The messege received is %s \n", (char *) mes);

printf("Thes sec time %s\n", var);
return 0;
}
