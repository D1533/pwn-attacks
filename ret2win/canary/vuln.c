#include <stdio.h>
#include <unistd.h>

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}

void vuln(){
    char buffer[64];
    read(0, buffer, 0x100);
    printf("%s\n", buffer);
}


int main() {
    while (1) {
        if (fork() == 0) {
            vuln();
            exit(0);
        } else {
            wait(NULL);
        }
    }
}
