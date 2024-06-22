#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main(int argc, char* argv[]) {

    noDaArvore* no = inserirNo(15, inserirNo(10, NULL, NULL), inserirNo(50, inserirNo(20, NULL, NULL), NULL));

    printf("Ordem: ");
    imprimirOrdem(no);
    printf("\nPre-Ordem: ");
    imprimirPreOrdem(no);
    printf("\nPos-Ordem: ");
    imprimirPosOrdem(no);
    printf("\n\n");

    buscarNo(no, 50);
    printf("\n");
    buscarNo(no, 16);

    exit(0);
}