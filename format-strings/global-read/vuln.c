#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

char secret[8];

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}

void init_secret(){
    int fd = open("/dev/urandom", O_RDONLY);
    read(fd, secret, 8);
    close(fd);
}
void vuln(){
    char buffer[64];
    read(0, buffer, 64);
    printf(buffer);
    
    puts("Secret: ");
    char secret_input[9];
    read(0, secret_input, 8); 
    if(memcmp(secret_input, secret, 8) == 0)
        win();
}

int main(){
    init_secret();
    vuln();
    return 0;
}


