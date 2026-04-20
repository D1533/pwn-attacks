#include <stdio.h>
#include <unistd.h>

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}


int admin = 0;

void vuln(){
    char buffer[64];
    read(0, buffer, 64);
    printf(buffer);
    
    if (admin){
        win();
    }
}

int main(){
    vuln();
    return 0;
}

