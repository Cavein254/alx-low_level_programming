#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
    char c;
    c = CHAR_MIN;
    while (c!= CHAR_MAX) {
        printf("%d \t %c \n", c, c);
        c = c + 1;
    }
    exit (EXIT_SUCCESS);
}