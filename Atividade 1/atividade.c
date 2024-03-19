#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int i, m;
    float n1 = 0;

    for(i = 1; argv[i] != 0; i++) {
        int n = atoi (argv[i]);
        n1 += n;
    }

    i = 1;
    m = 2

    if (argv[i] > argv[m]) {
        m++;        
    }

    printf("\nQuantidade de numeros recebidos: %d", i - 1);
    printf("\nMedia entre os numeros: %.2f", n1 / (i - 1));

    exit(0);
}