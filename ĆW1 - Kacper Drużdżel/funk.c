#include <stdio.h>
#include "funk.h"
#include <unistd.h>
#include <sys/types.h>

void funk()
{
    printf("UID: %d\nGID: %d\nPID: %d\nPPID: %d\nPGID: %d\n",getuid(),getgid(),getpid(),getppid(),getpgid(getpid()));
}

