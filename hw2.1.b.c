/*Alperen
 * 18120205016
 * hw2.1.b
 */


#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	pid_t pid; 
	fork();
	fork();
	fork();
	fork();
	
	pid = fork(); 
	if(pid==0){
      printf("B");
      fflush(stdout);
       
	}
	else if(pid>0){
	      sleep(1);
	       printf("a");
	       fflush(stdout);
	}
	else{
	 perror("fork error");
	exit(-1);
	
	}
}

