#include <stdio.h>

int main()
{
    // char ch = 500;  // 127 to -128

    /*
            char ==> 1 byte
            1 byte ==> 8 bits
            2 to the power 8 --> 256

            1. 500 - 256 ==> 244
            2. 244 - 256 ==> -12(yes it is in range)

    */

    char ch = 900; // 127 to -128
    /*
            char ==> 1 byte
            1 byte ==> 8 bits
            2 to the power 8 --> 256

            900 - 256 => 644
            644 - 256 => 388
            388 - 256 => 132
            132 - 256 => -124

    */

    printf("%d", ch);
    return 0;
}
