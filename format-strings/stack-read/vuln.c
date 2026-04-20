#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void win(){
    char *argv[] = {"/bin/bash", "-p", NULL};
    execve("/bin/bash", argv, NULL);
}

void vuln(){
    char secret[8];
    char buffer[32];
    char secret_input[8];
    
    int fd = open("/dev/urandom", O_RDONLY);
    read(fd, secret, 8);

    read(0, buffer, 32);
    printf(buffer);
    
    puts("Secret: ");
    read(0, secret_input, 8);
    if (memcmp(secret_input, secret, 8) == 0)
        win();
}

int main(){
    vuln(); 
    return 0;
}
