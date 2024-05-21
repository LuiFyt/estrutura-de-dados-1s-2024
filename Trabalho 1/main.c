#include <stdio.h>
#include <stdlib.h>

typedef struct dados {
    int num1;
    float num2;
} Dados;

int main(int argc, char* argv[]) {

    FILE *fp = fopen(argv[1], "r");

    if(fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        exit(1);
    }

    Dados in;
    int i = 0, X, mediaX, p2 = 0, p3 = 0;
    float Y, mediaY, p1 = 0, icn = 0, icp = 0, rl = 0;

    do{
        int rfscanf = fscanf(fp, "%d, %f", &in.num1, &in.num2);

        if(rfscanf != EOF){
         X+=in.num1;
         Y+=in.num2;
         i++;
        }
    } while(!feof(fp));

    mediaX = X / i;
    mediaY = Y / i;

    rewind(fp);
    
    for(int j = 0; j <= i; j++) {
        int rfscanf = fscanf(fp, "%d, %f", &in.num1, &in.num2);

        if (rfscanf != EOF) {
            p1 += (in.num1 - mediaX) * (in.num2 - mediaY);
            p2 = (in.num1 - mediaX);
            p3 += p2 * p2;
        }
    }

    icn = p1 / p3;

    icp = mediaY - icn * mediaX;

    fclose(fp);

    printf("y = %.1f*x + %.1f", icn, icp);

    exit(0);
}