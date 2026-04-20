#include <stdio.h>
#include <stdint.h>

void vuln(){
    char buffer[64];
    uint64_t *vulnerable_pointer = buffer;
    read(0, buffer, 96);
    puts(vulnerable_pointer);
    
    read(0, buffer, 0x100);
    printf("%s\n", buffer);
}

int main(){
    vuln();
    return 0;
}
