/*
 * Alperen İnci
 * hw 2 
 * 18120205016
 */
#include <unistd.h> /*pid_t getpid(), fork()*/
#include <sys/types.h>
#include <sys/wait.h> /* wait()*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    
    for(int i=0;i<6;++i){
	    
	    pid_t pid = fork();
	    if(pid>0){
		   
		   printf("a");
		   fflush(stdout);
		   exit(1);
		}
        else if(pid==0){
		        wait(NULL);
		        printf("B");
		        fflush(stdout); 
		}
		else{
			perror("fork error");
			exit(-1);
		}  	    
 	}

}

