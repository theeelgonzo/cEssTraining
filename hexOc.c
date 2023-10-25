#include <stdio.h>

int main() {
    int x,o;

    /*output hex*/
    for (x=0x1 ; x<=0x10; x++)
        printf("0x%X = %d\n", x,x);

    /*output octal*/
    for(o=01; o<=010; o++)
        printf("0%o = %d\n", o, o);

    return 0;
}
