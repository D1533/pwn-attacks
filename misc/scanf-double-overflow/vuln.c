#include <stdio.h>
#include <unistd.h>

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}

void vuln(){
    double buffer[0x10];
    for (size_t i = 0; i < 0x14; i++){
        scanf("%lf", &buffer[i]);
    }
}

int main(){
    vuln();
    return 0;
}
