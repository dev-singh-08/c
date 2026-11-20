#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork");
        return EXIT_FAILURE;
    }

    if (pid == 0)
    {
        printf("Child process\n");
        printf("Child PID : %ld\n", (long)getpid());
        printf("Parent PID : %ld\n", (long)getppid());
        exit(EXIT_SUCCESS);
    }
    else
    {
        wait(NULL);
        printf("Parent process\n");
        printf("Parent PID : %ld\n", (long)getpid());
        printf("Child PID  : %ld\n", (long)pid);
    }

    return EXIT_SUCCESS;
}