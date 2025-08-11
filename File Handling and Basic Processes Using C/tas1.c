#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    FILE *fp = fopen(argv[1], "a"); 
    char input[256];

    while (1) {
        printf("Enter text (-1 to stop): ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; 

        if (strcmp(input, "-1") == 0) break;

        fprintf(fp, "%s\n", input);
    }
    fclose(fp);
    return 0;
}
