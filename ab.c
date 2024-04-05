#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(){
int buff[20];
int fd= open("ab.txt", O_RDONLY);
lseek(fd, 5, SEEK_END);
read(fd,buff,5 );
write(1,buff,5);

//write(fd,"This is me",11);
close(fd);
}
