#include <stdio.h>

int main()
{
    printf("\"Hello World!\"\n");
    printf("\'Hello World!\'\n");
    printf("\aHello World!\a\n");  //alert
    printf("\bHello World!\b.\n");  //backspace to move cursor one back
    printf("OK 36batch\b\b\b\b\b\b\b\b\bM\n"); //prints OM 36batch
    printf("LK 36batch\b\b\b\b\b\b\b\b\bM\b\bO\n"); // prints OM 36batch
    // /t ==> tab space of 8 single spaces
    printf("12345678\n");
    printf("\tsunbeam\n");

    printf("\t12345678\t12345678\t12345678\n");
    printf("\tSunbeam\tInfo\tcom\n");
    printf("\tSunbeaminfo\tcom\n");

    // \r ==> carriage return

    printf("KM batch36\rO\n");

    printf("\\n takes the cursor to the new line\n"); // adding / makes it a printable \n

    printf("Discount is 10%%");//to print % add % at start
    return 0;
}