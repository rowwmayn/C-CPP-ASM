#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
    pid_t pid;
    int forks = 3;
    int i;

    for (i = 0; i < forks; i++) {
        pid = fork();

        if (pid < 0) {
            perror("fork failed");
            exit(1);
        }

        if (pid == 0) {
            if (getpid() % 2 == 1) {
                pid_t extra = fork();
                if (extra < 0) {
                    perror("extra fork failed");
                    exit(1);
                }
                if (extra == 0) {
                    printf("Extra child created by odd PID process %d (PID %d)\n", getppid(), getpid());
                    exit(0);
                } else {
                    wait(NULL);
                }
            }
        }
    }

    while (wait(NULL) > 0);

    if (getppid() == 1) {
        printf("Original parent process %d finished.\n", getpid());
    }

    return 0;
}
