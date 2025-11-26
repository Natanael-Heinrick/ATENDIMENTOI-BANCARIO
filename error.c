#include <stdio.h>
#include "error.h"

void tratar_erro(int codigo) {
    switch (codigo) {
        case 1: fprintf(stderr, "Erro: Estrutura Cheia!\n"); break;
        case 2: fprintf(stderr, "Erro: Estrutura Vazia!\n"); break;
        case 3: fprintf(stderr, "Erro: Pilha de Historico Cheia!\n"); break;
        case 4: fprintf(stderr, "Erro: Pilha de Historico Vazia!\n"); break;
        default: fprintf(stderr, "Erro Desconhecido!\n"); break;
    }
}
