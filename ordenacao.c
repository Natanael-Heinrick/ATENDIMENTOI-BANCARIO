#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>


FilaPrioritaria* criarFilaPrioritaria(int capacidade) {
    FilaPrioritaria *f = (FilaPrioritaria*) malloc(sizeof(FilaPrioritaria));
    if (f == NULL) {
        printf("Erro de alocacao (fila prioritaria)!\n");
        exit(1);
    }


    f->array = (Cliente*) malloc(capacidade * sizeof(Cliente));
    if (f->array == NULL) {
        printf("Erro de alocacao (array de clientes da fila prioritaria)!\n");
        free(f);
        exit(1);
    }

    f->tamanho = 0;
    f->capacidade = capacidade;
    return f;
}


void trocar(Cliente *a, Cliente *b) {
    Cliente temp = *a;
    *a = *b;
    *b = temp;
}

//Funções de Navegação
int pai(int i) { return (i - 1) / 2; }
int filhoEsquerda(int i) { return (2 * i) + 1; }
int filhoDireita(int i) { return (2 * i) + 2; }


void prioridadeParaCima(FilaPrioritaria *f, int i) {

    while (i != 0 && f->array[i].idade > f->array[pai(i)].idade) {

        trocar(&f->array[i], &f->array[pai(i)]);
        i = pai(i);
    }
}

void prioridadeParaBaixo(FilaPrioritaria *f, int i) {
    int maior = i;
    int esq = filhoEsquerda(i);
    int dir = filhoDireita(i);


    if (esq < f->tamanho && f->array[esq].idade > f->array[maior].idade) {
        maior = esq;
    }


    if (dir < f->tamanho && f->array[dir].idade > f->array[maior].idade) {
        maior = dir;
    }

    if (maior != i) {
        trocar(&f->array[i], &f->array[maior]);
        prioridadeParaBaixo(f, maior);
    }
}
