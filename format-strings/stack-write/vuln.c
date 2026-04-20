#include <stdio.h>
#include <unistd.h>

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}


void vuln(){
    int admin = 0;
    int *vuln_pointer = &admin;
    char buffer[32];
    
    read(0, buffer, 32);
    printf(buffer);

    if (admin)
        win();
}

int main(){
    vuln();
    return 0;
}
