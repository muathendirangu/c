#include <stdio.h>

#define LOWER_MASK 0X0F // Binary 0000 1111
#define UPPER_MASK 0XF0 // Binary 1111 0000

int main(int argc, char *argv[])
{
    //two 4-bit variables stored in one 8-bit variable
    char value = 0xA5; // Binary 1010 0101
    char lower = value & LOWER_MASK; // Extract lower 4 bits
    char upper = (value & UPPER_MASK) >> 4; // Extract upper 4 bits

    printf("Lower 4 bits: %x\n", lower);
    printf("Upper 4 bits: %x\n", upper);
}
