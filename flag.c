#include <stdio.h>

/**
 * define all 8 possibles flags for an 8 bit variable
 *       name                   hex                 binary
*/
#define FLAG_1 0x01     // 0000 0001
#define FLAG_2 0x02     // 0000 0010
#define FLAG_3 0x04     // 0000 0100
#define FLAG_4 0x08     // 0000 1000
#define FLAG_5 0x10     // 0001 0000
#define FLAG_6 0x20     // 0010 0000
#define FLAG_7 0x40     // 0100 0000
#define FLAG_8 0x80     // 1000 0000


int main(int argc, char *argv[])
{
    char flags = 0; // initialize an 8 bit variable to store flags

    // set the flags with a logical OR
    flags = flags | FLAG_1; // set flag 1
    flags = flags | FLAG_3; // set flag 3

    /*check the flags with logical and
    * if the flag is set then the logical AND returns 1 causing the if statement to be true
     */
    if (flags & FLAG_1)
    {
        printf("Flag 1 is set\n");
    }

    if (flags & FLAG_8)
    {
        printf("Flag 8 is set\n");
    }

    // check multiple flags by using logical OR
    if ((flags & FLAG_1) || (flags & FLAG_4))
    {
        printf("Flag 1 or Flag 4 is set\n");
    }
    return 0;

}

