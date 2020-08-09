#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h>
#include "funk.h"
  
int main() 
{       
    int pid = fork(); 
  
    if (pid > 0) 
        printf("proces - rodzic\n\n");   ///proces rodzic kończy wykonywanie przed procesem dzieckiem
    else if (pid == 0) 
    { 
        printf("\n\nPID dziecka: %d",getpid());
        sleep(10); 
        system("pstree -p");  //wyswietlanie drzewa procesow
        printf("\n\nproces - dziecko");  //proces dziecko zostaje "osierocone" i zostaje przejęte przez init/systemd
    } 
  
    return 0; 
} 
