#ifndef ORDENACAO_H
#define ORDENACAO_H

#include "cliente.h"

typedef struct {
    Cliente *array;
    int tamanho;
    int capacidade;
} MaxHeap;

MaxHeap* criarHeap(int capacidade);
void inserirClientePreferencial(MaxHeap *heap, Cliente c);
Cliente removerClientePreferencial(MaxHeap *heap);
int heapVazio(MaxHeap *heap);
void exibirHeap(MaxHeap *heap); // Exibe ordenado sem destruir

#endif
