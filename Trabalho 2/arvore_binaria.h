typedef struct noDaArvore {
    int valor;
    struct noDaArvore* esquerda;
    struct noDaArvore* direita;
} noDaArvore;

noDaArvore* inserirNo(int valor, noDaArvore* esquerda, noDaArvore* direita);
void imprimirPreOrdem(noDaArvore* no);
void imprimirOrdem(noDaArvore* no);
void imprimirPosOrdem(noDaArvore* no);
void buscarNo(noDaArvore* no, int busca);