#include <stdio.h>

char *myName(void) {
    static char me[] = "Jordan Godwin";

    return(me);

}

int main() {
    printf("The name of the student taking this course is %s\n", myName());

    return(0);
}
