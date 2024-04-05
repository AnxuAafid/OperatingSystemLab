#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>



int main(){
int buf[30];
int file=open("raw.txt", O_RDONLY);
lseek(file,5,SEEK_SET);
read(file,buf,20);
write(1,buf,20);

return 0;
}
