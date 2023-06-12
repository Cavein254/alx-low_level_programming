#include <stdio.h>
#include <stdlib.h>

int main () {
    unsigned int x;
    x = 0;
    while (x >= 0) {
        printf("%u\n", x);
        x  = x + 100000000000000;
    }
    exit(EXIT_SUCCESS);
}