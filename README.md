## Pwn-Attacks

A set of intentionally vulnerable C programs demonstrating common binary exploitation techniques, along with build scripts and example exploits. 
The C code is deliberately minimal and straightforward to clearly illustrate each vulnerability. The idea is to make the vulnerable binary as simple as posible to
focus on the attack topic.


### Format-Strings
- [global-read](format-strings/global-read) - Read a global variable using format strings
- [global-write](format-strings/global-write) - Write to a global variable address using format strings
- [stack-read](format-strings/stack-read) - Read a stack variable using format strings
- [stack-write](format-strings/stack-write) - write to a stack variable address using format strings

### Ret2Win
- [re2win canary](ret2win/canary) - Leak the canary one byte at a time and overwrite the return address to call a win function.
- [ret2win no pie](ret2win/no-pie) - Overwrite the return address to call a win function.
- [ret2win pie](ret2win/pie) - Leak an address to defeat PIE and overwrite the return address to call a win function.

### Ret2Shellcode
- [ret2shellcode](ret2shellcode) - Inject and execute shellcode via a stack-based buffer overflow.

### ROP
- [rop](ROP) - Use Return-Oriented Programming (ROP) gadgets to chain existing code in the binary and achieve arbitrary code execution without injecting shellcode
