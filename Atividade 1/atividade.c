#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int qtd_n = argc - 1, menor_n = atoi(argv[1]), maior_n = atoi(argv[1]), vetor_ordem[qtd_n];
    float mda = 0;

    for(int i = 1; i <= qtd_n; i++) {
        int tfm_n = atoi (argv[i]);
        vetor_ordem[i - 1] = tfm_n;
        mda += tfm_n;
        
        if(menor_n > tfm_n) {
            menor_n = tfm_n;
        }

        if(maior_n < tfm_n) {
            maior_n = tfm_n;
        }

    }

    printf("\nQuantidade de numeros recebidos: %d", qtd_n);
    printf("\nMedia entre os numeros: %.2f", mda / qtd_n);
    printf("\nO menor numero e: %d", menor_n);
    printf("\nO maior numero e: %d", maior_n);

    for(int i = 0; i < qtd_n-1; i++) {
        for(int j = i; j < qtd_n; j++) {
            if(vetor_ordem[i] > vetor_ordem[j]) {
                int aux = vetor_ordem[j];
                vetor_ordem[j] = vetor_ordem[i];
                vetor_ordem[i] = aux;
            }
        }
    }

    for(int i = 0; i < qtd_n; i++) {
       printf("\nNumeros em ordem crescente: %d", vetor_ordem[i]);
    }

    exit(0);
}