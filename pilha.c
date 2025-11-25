#include <stdio.h>
#include "pilha.h"
#include "error.h"

void inicializarPilha(Pilha *p) {
    p->topo = -1;
}

void empilhar(Pilha *p, Cliente c) {
    if (p->topo >= MAX_PILHA - 1) {
        tratar_erro(3); // Erro: Pilha Cheia
        return;
    }
    p->dados[++(p->topo)] = c;
}

Cliente desempilhar(Pilha *p) {
    Cliente c = {"", "", "", 0, 0, 0, 0};
    if (p->topo == -1) {
        tratar_erro(4); // Erro: Pilha Vazia
        return c;
    }
    return p->dados[(p->topo)--];
}

void exibirHistorico(Pilha *p) {
    if (p->topo == -1) {
        printf("Historico vazio.\n");
        return;
    }
    printf("--- Historico de Atendimentos (Recentes primeiro) ---\n");
    for (int i = p->topo; i >= 0; i--) {
        printf("- %s (%s) \n", p->dados[i].nome, p->dados[i].tipo);
    }
}
