#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork(); // Create a new child process

    if (pid < 0) {
        // Error occurred
        fprintf(stderr, "Fork Failed\n");
        return 1;
    } else if (pid == 0) {
        // This is the child process
        printf("CHILD: I am the child process!\n");
        printf("CHILD: My PID is %d.\n", getpid());
        printf("CHILD: My parent's PID is %d.\n", getppid());
        // Execute the 'ls -l' command
        execlp("/bin/ls", "ls", "-l", NULL);
        // execlp replaces the current process, so this line will never be reached
        // unless there is an error.
        printf("CHILD: This line will not be printed.\n");
    } else {
        // This is the parent process
        printf("PARENT: I am the parent process!\n");
        printf("PARENT: My PID is %d.\n", getpid());
        printf("PARENT: Waiting for child (PID: %d) to complete...\n", pid);

        wait(NULL); // Parent waits for the child to complete

        printf("PARENT: Child process has completed. I am now exiting.\n");
    }

    return 0;
}