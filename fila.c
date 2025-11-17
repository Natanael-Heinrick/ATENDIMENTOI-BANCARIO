#include <stdio.h>
#include "fila.h"


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
