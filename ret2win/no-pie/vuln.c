#include <stdio.h>


void win(){
    puts("win");
}

void vuln(){
    char buffer[64] = {0};
    gets(buffer);
}

int main(){
    
    vuln();

    return 0;
}
