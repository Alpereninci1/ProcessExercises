/* Alperen İnci
 * 18120205016
 * hw2.2.a
 */
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	pid_t pid_1; 
	
	for(int i=0;i<3;++i){
		
	    pid_1 = fork();
	
	    if(pid_1==0){
           wait(0);
           sleep(1);
           printf("B");
           fflush(stdout);
           exit(1);
	    }
	    else{
		    
		    pid_t pid_2=fork();
		    
		    if(pid_2==0){
			   wait(0);
			   sleep(1);
			   printf("c");
			   fflush(stdout);
		     }
		     
		}
		if(pid_1>0){
		  sleep(1);
		  printf("a");
		  fflush(stdout); 
		  wait(0); 
		}
		else{
		    
		    perror("error");
		    exit(-1);
		}
	}
}		   
