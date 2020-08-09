#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <sys/wait.h>
#include <stdlib.h>
#include "funk.h"

int main()
{  
    int j=0;
    printf("Proces macierzysty - ");
    printf("PID: %d | PPID: %d | PGID: %d\n",getpid(),getppid(),getpgid(getpid()));
    int i;
    
    for(i=0;i<3;i++)
    {
       switch (fork())
        {
            case -1:
                perror("fork error");
                exit(-1);
            case 0:
                sleep(2);
                for(j=0;j<i;j++)
                {
                    printf("--");
                }
                printf("Proces dziecko - ");
                printf("PID: %d | PPID: %d | PGID: %d\n",getpid(),getppid(),getpgid(getpid()));
                break;
            default:
            sleep(2);         
            break;
                
        };
    }
    return 0;
}
