#include <stdio.h>
#include "fila.h"
#include "error.h"

void inicializarFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->quantidade = 0;
}

int filaVazia(Fila *f) {
    return (f->quantidade == 0);
}

int filaCheia(Fila *f) {
    return (f->quantidade == MAX_FILA);
}

int enfileirar(Fila *f, Cliente c) {
    if (filaCheia(f)) {
        tratar_erro(1); // Erro: Fila Cheia
        return 0;
    }
    f->clientes[f->fim] = c;
    f->fim = (f->fim + 1) % MAX_FILA;
    f->quantidade++;
    return 1;
}

Cliente desenfileirar(Fila *f) {
    Cliente c = {"", "", "", 0, 0, 0, 0};
    if (filaVazia(f)) {
        tratar_erro(2); // Erro: Fila Vazia
        return c;
    }
    c = f->clientes[f->inicio];
    f->inicio = (f->inicio + 1) % MAX_FILA;
    f->quantidade--;
    return c;
}

void exibirFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila Comum vazia.\n");
        return;
    }
    printf("--- Fila Comum (%d clientes) ---\n", f->quantidade);
    int count = 0;
    int i = f->inicio;
    while (count < f->quantidade) {
        printf("[%s] %s (Tipo: %s)\n", f->clientes[i].id, f->clientes[i].nome, f->clientes[i].tipo);
        i = (i + 1) % MAX_FILA;
        count++;
    }
}
