#include <stdio.h>
#include "error.h"

// Se no futuro quiser carregar mensagens de arquivo ou log, 
// coloque nesta função. Por enquanto só existe para integração.
void inicializarSistemaErros() {
    // Nada a inicializar agora
}

void exibirErro(CodigoErro erro) {
    switch (erro) {
        case ERR_SUCESSO:
            printf("[OK] Operação realizada com sucesso.\n");
            break;
        case ERR_FILA_CHEIA:
            printf("[ERRO] A fila está cheia!\n");
            break;
        case ERR_FILA_VAZIA:
            printf("[ERRO] A fila está vazia!\n");
            break;
        case ERR_PILHA_CHEIA:
            printf("[ERRO] A pilha está cheia!\n");
            break;
        case ERR_PILHA_VAZIA:
            printf("[ERRO] A pilha está vazia!\n");
            break;
        case ERR_MEMORIA:
            printf("[ERRO] Falha ao alocar memória!\n");
            break;
        case ERR_CLIENTE_INVALIDO:
            printf("[ERRO] Cliente inválido!\n");
            break;
        default:
            printf("[ERRO] Erro desconhecido.\n");
    }
}

const char* erroToString(CodigoErro erro) {
    switch (erro) {
        case ERR_SUCESSO:           return "Sucesso";
        case ERR_FILA_CHEIA:        return "Fila cheia";
        case ERR_FILA_VAZIA:        return "Fila vazia";
        case ERR_PILHA_CHEIA:       return "Pilha cheia";
        case ERR_PILHA_VAZIA:       return "Pilha vazia";
        case ERR_MEMORIA:           return "Erro de memória";
        case ERR_CLIENTE_INVALIDO:  return "Cliente inválido";
        default:                    return "Erro desconhecido";
    }
}
