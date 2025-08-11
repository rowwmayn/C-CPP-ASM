#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
    pid_t child_pid, grandchild_pid;
    int i;

    printf("1. Parent process ID : %d\n", getpid());

    child_pid = fork();

    if (child_pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (child_pid == 0) {
        printf("2. Child process ID : %d\n", getpid());

        for (i = 1; i <= 3; i++) {
            grandchild_pid = fork();

            if (grandchild_pid < 0) {
                perror("fork failed");
                exit(1);
            }

            if (grandchild_pid == 0) {
                printf("   %d. Grand Child process ID : %d\n", i+2, getpid());
                exit(0);
            } else {
                wait(NULL);
            }
        }
        exit(0);
    } else {
        wait(NULL);
    }

    return 0;
}
