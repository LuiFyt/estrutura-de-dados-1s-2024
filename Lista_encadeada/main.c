#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc, char* argv[]) {
    
    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copiar_lista(H);

    /*No* H = no('A', NULL);
    No* n2 = no('B', NULL);
    No* n3 = no('C', NULL);
    No* n4 = no('J', NULL);
    No* n5 = no('Y', NULL);
    No* Hc = copiar_lista(H);

    inserir_no(H, n2);
    inserir_no(H, n3);
    inserir_no(H, n4);
    inserir_no(H, n5);
    */

    imprimir_lista(H);
    printf("\n");
    imprimir_lista(Hc);

    H->proximo_no->valor = 'X';
    Hc->valor = 'U';

    printf("\n");
    imprimir_lista(H);
    printf("\n");
    imprimir_lista(Hc);

    liberar_lista(Hc);

    printf("\nqtd = %d", quantidade_nos(H));
    printf("\ncopia qtd = %d", quantidade_nos(Hc));

    exit(0);
}