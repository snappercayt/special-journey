#include<stdio.h>

int main()
{


    char ch = 'A';

    // when A is representated or stored in CPU it is converted to ASCII value = 65(int)

    /*
        A - Z = 65 to 90
        a - z = 97 to 122
    
    */

   printf("%c\n", ch); // A => character representation of  A 
   printf("%d\n", ch); // 65 => decimal representation of A 


   /*    
     signed 

     char ==> 1 byte
     1 byte = 8 bits
     ( 2 to the power 8 - 1)  - 1   ==>  max range 127 
     ( 2 to the power 7 ) - 1  ==> min range -128

    unsigned

     2 ^ 8 = 256
   */

   unsigned char ch1 = 200; 
   printf("%u\n", ch1);

   return 0;
}