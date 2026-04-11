#include <stdio.h>
#include <unistd.h>

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}

void vuln(){
    char buffer[64] = {0};
    gets(buffer);
}

int main(){
    vuln();
    return 0;
}
