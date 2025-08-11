#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>

#define SHM_NAME "/my_shm"
#define MAX_SIZE 1024

int compare_desc(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    return y - x; 
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    int n = argc - 1;

    int shm_fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, 0666);
    if (shm_fd == -1) {
        perror("shm_open");
        exit(1);
    }

 
    if (ftruncate(shm_fd, MAX_SIZE) == -1) {
        perror("ftruncate");
        shm_unlink(SHM_NAME);
        exit(1);
    }


    void *shm_ptr = mmap(0, MAX_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (shm_ptr == MAP_FAILED) {
        perror("mmap");
        shm_unlink(SHM_NAME);
        exit(1);
    }

    int *shared_arr = (int *)shm_ptr;

    for (int i = 0; i < n; i++) {
        shared_arr[i] = atoi(argv[i + 1]);
    }

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        munmap(shm_ptr, MAX_SIZE);
        shm_unlink(SHM_NAME);
        exit(1);
    } else if (pid == 0) {
        qsort(shared_arr, n, sizeof(int), compare_desc);
        munmap(shm_ptr, MAX_SIZE);
        close(shm_fd);
        exit(0);
    } else {
        wait(NULL);
        printf("Array after sorting by child:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", shared_arr[i]);
        }
        printf("\n");

        printf("Odd/Even status:\n");
        for (int i = 0; i < n; i++) {
            if (shared_arr[i] % 2 == 0)
                printf("%d is even\n", shared_arr[i]);
            else
                printf("%d is odd\n", shared_arr[i]);
        }
        munmap(shm_ptr, MAX_SIZE);
        close(shm_fd);
        shm_unlink(SHM_NAME);
    }

    return 0;
}
