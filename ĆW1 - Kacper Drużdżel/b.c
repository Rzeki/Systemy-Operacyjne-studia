#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include "funk.h"

int main()
{
    printf("Proces macierzysty\n");
    funk();
    int i;
    for(i=0;i<3;i++)
    {
       switch (fork())
        {
            case -1:
                perror("fork error");
                exit(1);
            case 0:
                printf("Proces dziecko\n");
                funk();
            default:
                wait(0);
        };
    }
    
    return 0;
}
