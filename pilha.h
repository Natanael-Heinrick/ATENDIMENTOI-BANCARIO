#ifndef PILHA_H
#define PILHA_H

#include "cliente.h"

#define MAX_PILHA 100 // Corrigido: Movido para o .h

typedef struct {
    Cliente dados[MAX_PILHA];
    int topo;
} Pilha;

void inicializarPilha(Pilha *p);
void empilhar(Pilha *p, Cliente c);
Cliente desempilhar(Pilha *p);
void exibirHistorico(Pilha *p);

#endif
