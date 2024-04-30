#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
    
    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copiar_lista(H);

    printf("Lista Original\n");
    imprimir_lista(H);
    printf("\n\nLista Copia\n");
    imprimir_lista(Hc);

    H->proximo_no->valor = 'E';
    Hc->valor = 'U';

    printf("\n\nLista Original\n");
    imprimir_lista(H);
    printf("\n\nLista Copia\n");
    imprimir_lista(Hc);

    liberar_lista(Hc);

    printf("\n\nqtd = %d", quantidade_nos(H));

    printf("\n\nE existe na lista? %d", verificar_existencia(H, 'E'));

    printf("\n\nE ocorre quantas vezes na lista? %d\n\n", verificar_ocorrencias(H, 'E'));

    imprimir_inversa(H);
    printf("\n\n");
    imprimir_lista(H);
    printf("\n\n");
    inserir_no_i(H, 2, no('J', NULL));
    imprimir_lista(H);

    remove_no_i(H, 2, NULL);
    printf("\n\n");
    imprimir_lista(H);

    exit(0);
}