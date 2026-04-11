#include <stdio.h>
#include <unistd.h>

void win(){
    puts("win");
}

void vuln(){
    char buffer[64] = {0};
    read(0, buffer, 0x100);
    puts(buffer);
}

int main(){
    // printf("%p\n", main);
    vuln();
    vuln();
    
    return 0;
}
