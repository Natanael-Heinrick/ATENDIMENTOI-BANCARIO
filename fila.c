#include <stdio.h>
#include "fila.h"
#include "ordenacao.h"


void inicializarFila(Fila *f)
{
    f->inicio = 0;
    f->fim = 0;
}

int filaVazia(Fila *f)
{
    return (f->inicio == f->fim);
}

int enfileirar(Fila *f, Cliente c)
{
    int proximoFim = (f->fim + 1) % MAX_FILA;
    if (proximoFim == f->inicio) {
        fprintf(stderr, "Erro: fila cheia. Nao foi possivel enfileirar \"%s\".\n", c.nome);
        return 0;
    }

    f->clientes[f->fim] = c;
    f->fim = proximoFim;
    return 1;
}

Cliente desenfileirar(Fila *f)
{
    if (filaVazia(f)) {
        fprintf(stderr, "Erro: fila vazia. Nao ha cliente para desenfileirar.\n");
        Cliente vazio = {"", 0, 0};
        return vazio;
    }

    Cliente c = f->clientes[f->inicio];
    f->inicio = (f->inicio + 1) % MAX_FILA;
    return c;
}

void exibirFila(Fila *f)
{
    if (filaVazia(f)) {
        printf("[Fila vazia]\n");
        return;
    }

    printf("Fila (inicio=%d, fim=%d):\n", f->inicio, f->fim);
    int i = f->inicio;
    int pos = 0;
    while (i != f->fim) {
        Cliente *c = &f->clientes[i];
        printf(" %02d) Nome: %s | Idade: %d | Prioridade: %d\n",
            ++pos, c->nome, c->idade, c->prioridade);
        i = (i + 1) % MAX_FILA;
    }
}

void inserirClientePrioritario(FilaPrioritaria *f, Cliente cliente) {
    if (f->tamanho == f->capacidade) {
        fprintf(stderr, "Erro: Fila preferencial (Heap) cheia!\n");
        return;
    }
    int i = f->tamanho;
    f->array[i] = cliente;
    f->tamanho++;

    prioridadeParaCima(f, i);
}

Cliente removerClientePrioritario(FilaPrioritaria *f) {
    if (f->tamanho <= 0) {
        fprintf(stderr, "Erro: Fila preferencial vazia!\n");
        Cliente vazio = {"", 0, 0};
        return vazio;
    }

    Cliente clienteMaisVelho = f->array[0];
    f->array[0] = f->array[f->tamanho - 1];
    f->tamanho--;

    prioridadeParaBaixo(f, 0);

    return clienteMaisVelho;
}

int filaPrioritariaVazia(FilaPrioritaria *f) {
    return (f->tamanho == 0);
}

void exibirFilaPrioritaria(FilaPrioritaria *f) {
    if (filaPrioritariaVazia(f)) {
        printf("[Fila Prioritária vazia]\n");
        return;
    }
    printf("Fila Prioritária (Quantidade - %d clientes):\n", f->tamanho);
    for (int i = 0; i < f->tamanho; i++) {
        Cliente *c = &f->array[i];
        printf(" %02d) Nome: %s | Idade: %d | Prioridade: %d\n",
            i + 1, c->nome, c->idade, c->prioridade);
    }


}
