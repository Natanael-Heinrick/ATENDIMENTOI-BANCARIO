#include <stdio.h>
#include "fila.h"

/*
=======================================
| MÓDULO FILA - RESPONSÁVEL: Pessoa 1 |
=======================================
Descrição: Implementação das operações de fila (buffer circular)
para gerenciamento da ordem de atendimento dos clientes.

Tarefas Pendentes:
✅ Já implementado: inicializarFila(), filaVazia()
✅ Implementado agora: enfileirar(), desenfileirar(), exibirFila()
*/

void inicializarFila(Fila *f)
{
    f->inicio = 0;
    f->fim = 0;
    // Opcional: limpar o vetor
    // for (int i = 0; i < MAX_FILA; i++) f->clientes[i] = (Cliente){"", 0, 0};
}

int filaVazia(Fila *f)
{
    return (f->inicio == f->fim);
}

int enfileirar(Fila *f, Cliente c)
{
    // cheia quando avançar o fim alcança o início
    int proximoFim = (f->fim + 1) % MAX_FILA;
    if (proximoFim == f->inicio) {
        // fila cheia
        fprintf(stderr, "Erro: fila cheia. Nao foi possivel enfileirar \"%s\".\n", c.nome);
        return 0; // falha
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
