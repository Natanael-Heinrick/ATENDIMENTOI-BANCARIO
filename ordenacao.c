#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Necessário para memcpy
#include "ordenacao.h"
#include "error.h"

// Funções Auxiliares Internas
void trocar(Cliente *a, Cliente *b) {
    Cliente temp = *a; *a = *b; *b = temp;
}
int pai(int i) { return (i - 1) / 2; }
int filhoEsquerda(int i) { return (2 * i) + 1; }
int filhoDireita(int i) { return (2 * i) + 2; }

void heapifyParaCima(MaxHeap *heap, int i) {
    while (i != 0 && heap->array[i].idade > heap->array[pai(i)].idade) {
        trocar(&heap->array[i], &heap->array[pai(i)]);
        i = pai(i);
    }
}

void heapifyParaBaixo(MaxHeap *heap, int i) {
    int maior = i;
    int esq = filhoEsquerda(i);
    int dir = filhoDireita(i);

    if (esq < heap->tamanho && heap->array[esq].idade > heap->array[maior].idade)
        maior = esq;
    if (dir < heap->tamanho && heap->array[dir].idade > heap->array[maior].idade)
        maior = dir;

    if (maior != i) {
        trocar(&heap->array[i], &heap->array[maior]);
        heapifyParaBaixo(heap, maior);
    }
}

// Funções Públicas
MaxHeap* criarHeap(int capacidade) {
    MaxHeap *heap = (MaxHeap*) malloc(sizeof(MaxHeap));
    if (!heap) return NULL;
    heap->array = (Cliente*) malloc(capacidade * sizeof(Cliente));
    if (!heap->array) { free(heap); return NULL; }
    heap->tamanho = 0;
    heap->capacidade = capacidade;
    return heap;
}

void inserirClientePreferencial(MaxHeap *heap, Cliente c) {
    if (heap->tamanho == heap->capacidade) {
        tratar_erro(1); return;
    }
    int i = heap->tamanho;
    heap->array[i] = c;
    heap->tamanho++;
    heapifyParaCima(heap, i);
}

Cliente removerClientePreferencial(MaxHeap *heap) {
    Cliente vazio = {"", "", "", 0, 0, 0, 0};
    if (heap->tamanho <= 0) {
        tratar_erro(2); return vazio;
    }
    Cliente raiz = heap->array[0];
    heap->array[0] = heap->array[heap->tamanho - 1];
    heap->tamanho--;
    heapifyParaBaixo(heap, 0);
    return raiz;
}

int heapVazio(MaxHeap *heap) {
    return (heap->tamanho == 0);
}

void exibirHeap(MaxHeap *heap) {
    if (heapVazio(heap)) {
        printf("Fila Prioritaria vazia.\n");
        return;
    }
    // Cria cópia para não destruir o original
    MaxHeap *copia = criarHeap(heap->capacidade);
    copia->tamanho = heap->tamanho;
    memcpy(copia->array, heap->array, heap->tamanho * sizeof(Cliente));

    printf("--- Fila Prioritaria (Ordenada por Idade) ---\n");
    int tam = copia->tamanho;
    for(int i = 0; i < tam; i++) {
        Cliente c = removerClientePreferencial(copia);
        printf("[%s] %s (Idade: %d)\n", c.id, c.nome, c.idade);
    }
    free(copia->array);
    free(copia);
}
