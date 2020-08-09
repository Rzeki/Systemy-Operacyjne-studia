#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <sys/wait.h>
#include <stdlib.h>
#include "funk.h"


int main()
{  
    int lider;   //pid lidera
    printf("Proces macierzysty - ");
    funk();
    int i;
    
    for(i=0;i<3;i++)
    {
       switch (fork())
        {
            case -1:
                perror("fork error");
                exit(-1);
            case 0:
                lider = getpid();
                setpgid(lider,lider);
                printf("Proces dziecko - ");
                funk();
                break;
            default:
            wait(0);        
            break;
                
        };
    }
    return 0;
}
