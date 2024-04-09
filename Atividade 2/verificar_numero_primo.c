#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int n = atoi (argv[1]), i, r = 0;

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            r++;
        }
    }

    if(r == 2) {
        printf("True");
    }else {
        printf("False");
    }

    exit(0);
}