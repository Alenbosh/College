#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){
pid_t pid;
pid=fork();
if(pid==0){
printf("Child Process %d",getpid());
}
else{
printf("Parent Process %d",getpid());
}
return 0;
}

