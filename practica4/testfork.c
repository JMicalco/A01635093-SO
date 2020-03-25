#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main() {
    pid_t hijo;
    hijo=fork();
    if (hijo < 0) {
        printf("Error\n");
        }
        else if (hijo == 0) {
        printf("Soy el proceso hijo\n");
        }
        else {
        printf("Soy el proceso padre\n");
        }
}

