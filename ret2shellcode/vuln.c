#include <stdio.h>
#include <unistd.h>


void vuln(){
    char buffer[0x100];
    read(0, buffer, 0x200);
    puts(buffer);
}


int main(){

    vuln();
    vuln();
    return 0;

}
