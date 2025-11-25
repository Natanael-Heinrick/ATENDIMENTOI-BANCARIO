#ifndef FILA_H
#define FILA_H

#include "cliente.h"

#define MAX_FILA 100  // Corrigido: Movido para o .h

typedef struct {
    Cliente clientes[MAX_FILA];
    int inicio;
    int fim;
    int quantidade;
} Fila;

void inicializarFila(Fila *f);
int filaVazia(Fila *f);
int filaCheia(Fila *f);
int enfileirar(Fila *f, Cliente c);
Cliente desenfileirar(Fila *f);
void exibirFila(Fila *f);

#endif
