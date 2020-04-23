/* Alperen İnci
 * 18120205016	
 * hw2.2.b
 */


#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	pid_t pid_1;
	
	fork();
	fork();
	fork();
	fork();
	
	pid_1 = fork();
	
	if(pid_1==0){
	   pid_t pid_2= fork();
	   
	   if(pid_2==0){
	      
	      printf("c");
	      fflush(stdout);
	   
	   }
	   else if(pid_2 > 0){
	   
	           sleep(2);
	           printf("B");
	           fflush(stdout);
	   }
	   else{
	      
	      perror("child fork error");
	      exit(-1);
	   }
	   
	}
	else if(pid_1>0){
	       
	       sleep(1);
	       printf("a");
	       fflush(stdout);
	}
	else{
	   perror("parent fork error");
	   exit(-1);
	}
}

