#include <stdio.h>
#include <unistd.h>

void gadgets(){
    __asm__(".intel_syntax noprefix\n"
        "pop rdi\n"
        "ret\n"
        ".att_syntax\n");
    char *sh = "/bin/bash";
}

void helper_functions(){
    setuid(1000); 
}

void vuln(char *command){
    char buffer[64] = {0};
    gets(buffer);
    system(command);
}

int main(){
    vuln("echo");
    return 0;
}

