#include<stdio.h>
#include <unistd.h>
void main(){
 int pd;
 pd = fork();
 if(pd==0)
 {
   printf("This is child process\nThe process ID is %d\nParent ID is %d\n",getpid(),getppid());
   }
 else if(pd>0)
 {
   //wait();
   printf("This is parent process\nThe process ID is %d\n",getpid());
  
   
 }
 else
 {
   printf("Fork Failed!!!");
 }
}
