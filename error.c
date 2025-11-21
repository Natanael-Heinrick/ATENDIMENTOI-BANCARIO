#include <stdio.h>
#include "error.h"

/*
 * Implementação simples que mapeia códigos para mensagens.
 * Comentários indicam onde você pode melhorar (i18n, logs, etc).
 */

void exibirErro(CodigoErro erro) {
    switch (erro) {
    case ERRO_NENHUM:
        /* Não imprimir nada quando não há erro. */
        break;
    case ERRO_FILA_CHEIA:
        printf("[ERRO] A fila está cheia. Não foi possível enfileirar.\n");
        break;
    case ERRO_FILA_VAZIA:
        printf("[ERRO] A fila está vazia. Operação não permitida.\n");
        break;
    case ERRO_PILHA_CHEIA:
        printf("[ERRO] A pilha está cheia. Não foi possível empilhar.\n");
        break;
    case ERRO_PILHA_VAZIA:
        printf("[ERRO] A pilha está vazia. Operação não permitida.\n");
        break;
    case ERRO_MEMORIA:
        printf("[ERRO] Falha ao alocar memória.\n");
        break;
    case ERRO_CLIENTE_INVALIDO:
        printf("[ERRO] Dados do cliente inválidos.\n");
        break;
    case ERRO_INDEX_FORA:
        printf("[ERRO] Índice fora do intervalo.\n");
        break;
    default:
        printf("[ERRO] Erro desconhecido.\n");
        break;
    }
}

const char* erroToString(CodigoErro erro) {
    switch (erro) {
    case ERRO_NENHUM: return "Nenhum";
    case ERRO_FILA_CHEIA: return "Fila cheia";
    case ERRO_FILA_VAZIA: return "Fila vazia";
    case ERRO_PILHA_CHEIA: return "Pilha cheia";
    case ERRO_PILHA_VAZIA: return "Pilha vazia";
    case ERRO_MEMORIA: return "Erro de memória";
    case ERRO_CLIENTE_INVALIDO: return "Cliente inválido";
    case ERRO_INDEX_FORA: return "Índice fora do intervalo";
    default: return "Desconhecido";
    }
}
