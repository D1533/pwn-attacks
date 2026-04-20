#include <stdio.h>
#include <unistd.h>


void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}

void vuln(){
    int a;
    char buffer[64] = {0};
    int *vuln_pointer = &a;
    int value;

    read(0, buffer, 80);
    *vuln_pointer = value; 
    puts("");
}

int main(){
    vuln();
    return 0;
}
