#include <stdio.h>
#include <unistd.h>

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}

void vuln(){
    char buffer[64] = {0};
    read(0, buffer, 0x100);
    puts(buffer);
}

int main(){
    vuln();
    vuln();
    
    return 0;
}
