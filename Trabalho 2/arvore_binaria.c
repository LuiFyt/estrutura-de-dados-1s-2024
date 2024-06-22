#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

noDaArvore* inserirNo(int valor, noDaArvore* esquerda, noDaArvore* direita) {
    noDaArvore* no = malloc(sizeof(noDaArvore));

    if(no == NULL) {
        exit(1);
    } else {
        no->valor = valor;
        no->esquerda = esquerda;
        no->direita = direita;
    }
    
    return no;
}

void imprimirOrdem(noDaArvore* no) {
    if (no != NULL) {
        imprimirOrdem(no->esquerda);
        printf("%d ", no->valor);
        imprimirOrdem(no->direita);
    }
}

void imprimirPreOrdem(noDaArvore* no) {
    if (no != NULL) {
        printf("%d ", no->valor);
        imprimirPreOrdem(no->esquerda);
        imprimirPreOrdem(no->direita);
    }
}

void imprimirPosOrdem(noDaArvore* no) {
    if (no != NULL) {
        imprimirPosOrdem(no->esquerda);
        imprimirPosOrdem(no->direita);
        printf("%d ", no->valor);
    }
}

void buscarNo(noDaArvore* no, int busca) {
    if (no != NULL) {
        if (busca == no->valor) {
            printf("VALOR ENCONTRADO");
        }else if (busca < no->valor) {
            buscarNo(no->esquerda, busca);
        } else if (busca > no->valor) {
            buscarNo(no->direita, busca);
        }
    } else {
        printf("Valor nao encontrado");
    }
}