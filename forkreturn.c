#include<stdio.h>
#include<unistd.h>
int main(){
	pid_t p;
	p=fork();
	printf("\nFork returns:%d",p);
	printf("\nWelcome: My process id:%d, My parent's id:%d",getpid(),getppid());
	return 0;
}



output:
varsh@varshne:~/emblinux$ ./forkreturn

Fork returns:931
Welcome: My process id:930, My parent's id:312
Fork returns:0
Welcome: My process id:931, My parent's id:310
